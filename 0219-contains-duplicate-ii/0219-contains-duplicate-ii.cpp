class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int cnt=0;
        // m[nums[0]]=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                auto it=m.find(nums[i]);
                int j=it->second;
                if((i-j)<=k) return 1;
            }
             m[nums[i]]=i;
        }
        return 0;
    }
};