


                                                        // Richest customer  //



class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=INT_MIN;
       for(int i=0; i<accounts.size(); i++)
       {
           int currSum=0;
           for(int j=0; j<accounts[i].size(); j++)
           {
               currSum+=accounts[i][j];
               
            
           }
           cout<<currSum<<endl;
           if(currSum>maxSum)
           maxSum=currSum;
       }
       return maxSum;
    }
};
