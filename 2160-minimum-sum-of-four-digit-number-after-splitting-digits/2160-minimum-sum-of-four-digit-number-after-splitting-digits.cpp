class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;
     while(num>0)
     {
         int k=num%10;
         ans.push_back(k);
         num=num/10;
     }
        sort(ans.begin(),ans.end());
        int a1=ans[1]*10+ans[2];
        int a2=ans[0]*10+ans[3];
        return a1+a2;
    }
};