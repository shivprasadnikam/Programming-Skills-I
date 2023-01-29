

                                                         // Range Sum Query - Immutable  //

class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        for (auto val: nums){
            (this->nums).push_back(val);
        }
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for (int i= left; i<=right; i++)sum+= nums[i];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
