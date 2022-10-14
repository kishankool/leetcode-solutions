class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        for(int i=0;i<order.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==order[i])
                {
                    ans.push_back(s[j]);
                }
            }
        }
        multiset<char>m;
        for(int i=0;i<ans.size();i++)
        {
            m.insert(ans[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])==m.end())
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};