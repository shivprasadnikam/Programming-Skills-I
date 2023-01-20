

                                                      // Find Nearest Point That Has the Same X or Y Coordinate  //


class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int diff=0,minDiff=INT_MAX;
        int index=-1;
       // cout<<points[0][0];
        for(int i=0; i<points.size(); i++)
        {
            
            if(points[i][0]==x || points[i][1]==y)
            {
                
                diff=abs(x-points[i][0])+abs(y-points[i][1]);
                cout<<diff<<endl;
                if(diff<minDiff)
                {
                    minDiff=diff;
                    index=i;
                    
                    
                }
                
            }
            
        }
        return index;
    }
};
