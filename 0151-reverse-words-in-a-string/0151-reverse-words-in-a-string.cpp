class Solution {
public:
    string reverseWords(string s) {
        stack<string>m;
        if(s.size()==0) return s;
        string res;
        int hi=0,n=s.size();
        while(hi<n)
        {
            string temp;
            while(s[hi]!=' ' && hi<s.size())
            {
                    temp.push_back(s[hi]);
                    hi++;
            }
            if(temp.size()>0)
            {m.push(temp);}
            hi++;
            
        }
       while(!m.empty())
       {
           res+=m.top();
            m.pop();
           if(!m.empty())  res+=" ";
          
       }
        return res;
    }
};