class Solution {
public:
    int maximum69Number (int num) {
        vector<int>numb;
        while(num)
        {
            int k=num%10;
            numb.push_back(k);
            num=num/10;        
        }
        reverse(numb.begin(),numb.end());
        for(auto &i:numb)
        {
            if(i==6){
                i=9;
                break;
            }     
        }
        for(auto i:numb)
        {
            num=10*num+i;
        }
        return num;
    }
};