class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0; 
        unordered_map<char,int>m1;
        int cnt=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i]) bull++;
            m1[secret[i]]++;
        }
        for(auto i:guess)
        {
            if(m1.find(i)!=m1.end())
            {
                auto it=m1.find(i);
                if((it->second)>0)
                {
                    cow++;
                    (it->second)--;
                }
            }
        }
        cow=cow-bull;
        string bulls=to_string(bull);
        string cows=to_string(cow);
        string ans="";
        ans+=bulls;
        ans+="A";
        ans+=cows;
        ans+="B";
        return ans;
    }
};