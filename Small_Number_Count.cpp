class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         int n = nums.size();
        vector<int> count;
        for(int i=0; i<n; i++){
            count.push_back(0);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                    if(nums[j]<nums[i]){
                    count[i]++;
                }
            }
        }
        return count;
    }
};
