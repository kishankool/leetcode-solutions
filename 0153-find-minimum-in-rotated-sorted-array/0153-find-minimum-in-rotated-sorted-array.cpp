class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int lo=0,hi=n-1,ans=nums[0];
        while(lo<=hi)
        {
                int mid=(lo+hi)/2;
                if(nums[mid]>=nums[0]) lo=mid+1;
                else {
                    ans=min(ans,nums[mid]);
                    hi=mid-1;   
                }
                
        }
        return ans;
    }
};