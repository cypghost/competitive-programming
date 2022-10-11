class Solution {
public:
    vector<int> partitionLabels(string s) {
        map <char, int> cnt;
        for(int i = 0; i < s.size(); i++)cnt[s[i]] = i;
        int j = 0, start = 0;
        int i = 0;
        int n = s.size();
        vector <int> ans;
        while(i < n){
            j = max(j, cnt[s[i]]);
            if( i == j){
                ans.push_back(i-start+ 1);
                start = i + 1;
            }
        i++;
      }
      return ans;
    }
};
