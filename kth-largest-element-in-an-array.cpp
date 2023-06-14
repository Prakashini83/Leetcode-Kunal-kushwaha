#https://leetcode.com/problems/kth-largest-element-in-an-array/description/
class Solution {
public:
    void quicksort(vector<int>&nums,int s,int e)
    { 
        if(s>=e)
        return;
        int j=s-1;
        for(int i=s;i<=e;i++)
        {  
            if(nums[i]<nums[e]||i==e)
            {
                j++;
             int temp=nums[j];
             nums[j]=nums[i];
             nums[i]=temp;
            }  
        }
        quicksort(nums,s,j-1);
        quicksort(nums,j+1,e);
    }
    int findKthLargest(vector<int>& nums, int k) {
    quicksort(nums,0,nums.size()-1);
    return nums[nums.size()-k];
    } 
}; 
