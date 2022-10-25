class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
         int N = changed.size();
         vector<int> ans;
         if (N%2 != 0) return ans;
         unordered_map<int, int> cnt;
         for (auto n : changed) {
             cnt[n]++;
         }
         sort(changed.begin(), changed.end());
         for (auto n : changed) {
            if (cnt[n] == 0) continue;
            ans.push_back(n);
            cnt[n]--;
            if (cnt[2*n] == 0) return vector<int>();
            cnt[2*n]--;
        }
        return ans;
    }
};
