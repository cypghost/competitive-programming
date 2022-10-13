class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int left = 0;
        int right = 0;
        int cnt = 0;
        vector <int> odd;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 1)odd.push_back(i);
        }
            if(odd.size()>=k){
                for(int i = 0, j = k-1; j < odd.size(); i++, j++){
                        int left = i==0?odd[i]+1: odd[i] - odd[i-1];
                        int right = j==odd.size()-1 ?n-odd[j] : odd[j+1] - odd[j];
                        ans += left * right;
         }
      }
      return ans;   
    }
};
