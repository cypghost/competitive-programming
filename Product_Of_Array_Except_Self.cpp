class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int temp = 1, i;
        vector <int> ans;
        for(i = 0; i < nums.size(); i++)
        {
            ans.push_back(temp);
            temp = temp*nums[i];
        }
        
        temp = 1;
        
        for(i = nums.size() - 1; i>=0; i--)
        {
            ans[i] = ans[i]*temp;
            temp = temp*nums[i];
        }
        return ans;
    }
};
