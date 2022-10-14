class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<order.size();i++)
        {
            if(m.find(order[i])!=m.end())
            {
                auto it=m.find(order[i]);
                while(it->second>0)
                {
                    ans.push_back(order[i]);
                    it->second--;
                }
            }
        }
        for(auto i:m)
        {
            if(i.second>0)
            {
                while(i.second>0)
                {
                    ans.push_back(i.first);
                    i.second--;
                }
            }
        }
        return ans;
            
    }
};