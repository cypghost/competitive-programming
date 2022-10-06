class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int n = fruits.size();
      int j = 0;
      map <int, int> m;
      int ans = 0;
      for(int i = 0; i < n; i++){
         m[fruits[i]] += 1;
         while(m.size() > 2 && j <= i){
            m[fruits[j]]--;
            if(m[fruits[j]] == 0)m.erase(fruits[j]);
            j++;
         }
         ans = max(i - j + 1, ans);
      }
      return ans;
    }
};
