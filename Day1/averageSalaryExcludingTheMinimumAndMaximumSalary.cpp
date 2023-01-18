

                                                   //  Average Salary Excluding the Minimum and Maximum Salary  //


class Solution {
public:
    double average(vector<int>& salary) {
        double diff=0;
        double sum=0;
        
        sort(salary.begin(),salary.end());
        for(int i=1; i<salary.size()-1; i++)
        {
            sum+=salary[i];
        }
      //  diff=(sum-(salary[0]+salary[salary.size()-1])/(salary.size()-2));
      //  cout<<sum-(salary[0]+salary[salary.size()-1])/(salary.size()-2);
      diff=sum/(salary.size()-2);
        return diff;
    }
};
