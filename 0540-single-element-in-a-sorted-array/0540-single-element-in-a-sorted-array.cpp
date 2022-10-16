class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int lo=0,hi=nums.size()-1;
        int mid;
        while(lo<=hi)
        {
             mid=(lo+hi)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
             else if(mid%2==0 && nums[mid]==nums[mid-1])
             {
                 hi=mid-1;
             }
             else if(mid%2==1 && nums[mid]==nums[mid-1])
             {
                 lo=mid+1;
             }
             else if(mid%2==0 && nums[mid]==nums[mid+1])
             {
                 lo=mid+1;
             }
             else if(mid%2==1 && nums[mid]==nums[mid+1])
             {
                 hi=mid-1;
             }
        }
        return -1;
    }
};