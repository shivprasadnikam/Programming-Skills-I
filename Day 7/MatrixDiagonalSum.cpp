

                                                                  // Matrix Diagonal Sum //


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size()-1;
        
        for(int i=0; i<mat.size(); i++)
        {
            //diagonal 1
            sum+=mat[i][i];
            //diagonal 2
            if(i!=(n-i)) //i!=n-i  because we dont want centre twice
                sum+=mat[i][n-i];
                
        }
        return sum;
    }
};
