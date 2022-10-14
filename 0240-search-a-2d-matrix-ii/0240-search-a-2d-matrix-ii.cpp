class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int x;
        int row=0;
        int coloumn=(matrix[0].size()-1);
        while(row<matrix.size() && coloumn>-1)
        {
            x=matrix[row][coloumn];
            if(x==target)
            {
                return 1;
            }
            else if(x>target)
            {
                coloumn--;
            }
            else
            {
                row++;
            }
        }
        return 0;  
    }
};