class Solution {
public:
    string count(string s)
    {
        string ans="";
        int p=s.size();
        if(p==1)
        {
            ans.push_back('1');
            ans.push_back(s[0]);
        }
        for(int i=0;i<p-1;i++)
        {
            char key=s[i];
            int cnt=1;
            while(s[i]==s[i+1])
            {
                cnt++;
                i++;
            } 
            string num=to_string(cnt);
            ans+=num;
            ans.push_back(key);
        }
        if(p>=2 && s[p-1]!=s[p-2]) 
        {
            char o='1';
            ans.push_back(o);
            ans.push_back(s[p-1]);
        }
        return ans;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        string ans=countAndSay(n-1);
        return count(ans);
    }
};