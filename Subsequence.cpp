#include <bits/stdc++.h>
using namespace std;
void rec(int i,int sum,int arr[],vector<int>p,int n,int target)
{
    if(i==n)
    {
        if(sum==target)
        {
            for(auto i:p)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            
        }
     return;    
    }
    sum+=arr[i];
    p.push_back(arr[i]);
    rec(i+1,sum,arr,p,n,target);
    p.pop_back();
    rec(i+1,sum-arr[i],arr,p,n,target);
    
}
int main() {
	int arr[]={1,2,3,4,5};
	int sum=0,i=0,target=5;
	vector<int>p;
	rec(i,sum,arr, p,5,target);
	return 0;
}
