class Solution {
    private:
    bool isVowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
public:
    string reverseVowels(string s) {
        int lo=0,hi=(s.size()-1);
        while(hi-lo>0)
        {
            if( isVowel(s[hi]) && isVowel(s[lo]))
            {
                swap(s[lo],s[hi]);
                 lo++;
                 hi--;
            }
            else if( (isVowel(s[hi]))==1 && (isVowel(s[lo]))==0)
            {
                lo++;
            }
            else if( (isVowel(s[hi]))==0 && (isVowel(s[lo]))==1)
            {
                hi--;
            }
            else
            {
                lo++;
                hi--;
            }
        }
        return s;
    }
};