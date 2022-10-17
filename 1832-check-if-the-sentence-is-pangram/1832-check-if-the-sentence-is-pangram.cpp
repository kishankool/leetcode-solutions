class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int>v(26);
        for(auto i:s)
        {
            int k=int(i)-97;
            v[k]++;
        }
        int cnt=0;
        for(auto i:v)
        {
            if(i>0) cnt++;
        }
        if(cnt==26) return true;
        else return false;
            
    }
};