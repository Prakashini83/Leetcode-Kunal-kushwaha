#https://leetcode.com/problems/number-of-ways-to-split-a-string/description/
class Solution {
public:
    int numWays(string s) {
        /*
            ###  3 conditions  ###

            case 1=> number of zeroes == 0
            case 2=> number of zeroes divisible by 3
            case 3=> number of zeroes not divisible by 3

            ans = (index2 - index1) * (index2End - index2End);
        */

        long long ones = 0, n = s.size();
        long long ans = 0;
        long long mod = 1e9+7;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1')ones++;
        }

    // Case 3
        if(ones%3 != 0){
            return 0;
        }

    // Case 1
        else if(ones == 0){
            cout<<"In "<<(n-1)<<" "<<(n-2)<<endl;
            ans = ((n-1)*(n-2)/2)%mod;
            cout<<ans<<endl;
        }

    // Case 2
        // number of ones divisible by 3

        else{
            long long cntReq = ones/3;
            long long index1 = -1, index2 = -1;
            long long index1End = -1, index2End = -1;
            long long count = 0;

            for(long long i=0;i<s.size();i++){
                if(s[i]=='1'){
                    count++;
                }
                if(count == cntReq && index1 == -1){
                    index1 = i;
                }
                if(count == cntReq+1 && index2 == -1){
                    index2 = i;
                }
                if(count == cntReq*2 && index1End == -1){
                    index1End = i;
                }
                if(count == cntReq*2+1 && index2End == -1){
                    index2End = i;
                    break;
                }
            }

            ans = (((index2-index1)%mod)*((index2End-index1End)%mod))%mod;
        }

        return (int)ans;
    }
};
