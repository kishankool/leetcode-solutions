class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copy=strs; 
        vector<vector<string>>v;
        if(strs.size()==1)
        {
            vector<string>temp={strs[0]};
            v.push_back(temp);
            return v;
        }
        for(auto &i:copy)
        {
            sort(i.begin(),i.end());
        }
        
        unordered_map<string,vector<int>>m;
        int cnt=0;
        for(auto i:copy)
        {   
            if(m.find(i)!=m.end())
            {
                m[i].push_back(cnt);
            }
            else
            {
                vector<int>temp={cnt};
                m.insert({i,temp});
            }
            cnt++;
        }
        for(auto i:m)
        {
            vector<int>temp=i.second;
            vector<string>ans;
            for(auto j:temp)
            {
                ans.push_back(strs[j]);
            }
            v.push_back(ans);
        }
        return v;
    }
    
};