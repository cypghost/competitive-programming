class NumArray {
public:
   vector <int> prefixsum;
    NumArray(vector<int>& nums) {
        int sum = 0;
        if(prefixsum.empty())
        {
            prefixsum.push_back(0);
        }
        for(int i =0; i< nums.size(); i++)
        {
            sum+=nums[i];
            prefixsum.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = prefixsum[right+1] - prefixsum[left-1+1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
