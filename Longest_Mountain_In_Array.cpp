class Solution {
public:
    int longestMountain(vector<int>& arr) {
      int ret = 0;
      int n = arr.size();
      int j;
      for(int i = 0; i < n; i = j + 1){
         j = i;
         bool down = false;
         bool up = false;
         while(j + 1 < n && arr[j + 1] > arr[j]) {
            up = true;
            j++;
         }
         while(up && j + 1 < n && arr[j + 1] < arr[j]){
            down = true;
            j++;
         }
         if(up && down){
            ret = max(j - i + 1, ret);
            j--;
         }
      }
      return ret;
   }
};
