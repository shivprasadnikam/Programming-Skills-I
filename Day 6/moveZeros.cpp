
                                                          // Move Zeroes  //


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp=0;
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
               
            }
        }
       // return nums;
    }
};
