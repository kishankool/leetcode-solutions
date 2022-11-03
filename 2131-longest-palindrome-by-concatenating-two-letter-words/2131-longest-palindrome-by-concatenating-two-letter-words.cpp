class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        unordered_map<string,int>m;
        for(auto i:words)
        {
            string k=i;
            reverse(k.begin(),k.end());
            if(m[k]>0)
            {
                ans+=4;
                m[k]--;
            }
            else m[i]++;
        }
        for(auto i:m)
        {
            if(i.first[0]==i.first[1] && i.second>0)
            {
                return ans+2;
            }
        }
        return ans;
    }
};