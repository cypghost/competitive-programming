class Solution {
public:
    int maxVowels(string s, int k) {
      int counts = 0;
      set<char> m;
      for (auto it : { 'a', 'e', 'i', 'o', 'u' })
      m.insert(it);
      int ret = 0;
      for (int i = 0; i < k; i++) {
         counts += m.count(s[i]) ? 1 : 0;
      }
      ret = max(ret, counts);
      int n = s.size();
      for (int i = k; i < n; i++) {
         if (m.count(s[i - k])) {
            counts--;
         }
         counts += m.count(s[i]) ? 1 : 0;
         ret = max(ret, counts);
      }
      return ret; 
    }
};
