class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int lo=0,n=nums.size(),hi=0;
        // if(nums.size()==1) return 1;
        int newCand;
        while(hi<n)
        {
            if(nums[hi]!=nums[lo])
            {
                lo++;
                nums[lo]=nums[hi];
            }      
            hi++;
          }
        
        return (lo+1);
       
    }
};