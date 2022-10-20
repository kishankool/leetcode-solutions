class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        map<int,vector<int>>u;
        for(auto i:m)
        {
            u[i.second].push_back(i.first);
        }
        vector<int>ans;
        for (auto it = u.rbegin(); it != u.rend(); it++)
        {
              vector<int>temp=it->second;
              for(auto i:temp)
              {
                  if(k==0) break;
                  ans.push_back(i);
                  k--;
              }
        }
        return ans;
    }
};