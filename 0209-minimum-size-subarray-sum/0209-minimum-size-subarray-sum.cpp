class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int lo=0,hi=0,n=nums.size();
        int size=INT_MAX;
        int sum=0;
        while(hi<n)
        {
            while(hi<n && sum<target)
            {
                sum+=nums[hi];
                  hi++;
            }
            while(lo<n && sum>=target)
            {
                if(sum>=target)  size=min(size,(hi-lo));
                sum-=nums[lo];
                lo++;
                
            }
        }
        return size==INT_MAX?(0):size;
    }
};