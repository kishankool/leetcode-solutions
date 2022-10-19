class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto i:words)
        {
            m[i]++;
        }
        map<int,vector<string>>u;
        for(auto i:m)
        {
            u[i.second].push_back(i.first);
        }
        vector<string>ans;
        for (auto it = u.rbegin(); it != u.rend(); it++)
        {
              vector<string>temp=it->second;
              sort(temp.begin(),temp.end());
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

















