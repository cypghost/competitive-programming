class Solution {

private:
    int MOD = 1e9 + 7;

public:
    int threeSumMulti(vector<int>& A, int target) {

        map<int, int> freq;
        for(int a: A)
            freq[a] ++;

        vector<int> keys;
        for(const pair<int, int>& p: freq)
            keys.push_back(p.first);

        int res = 0;
        vector<vector<int>> comb(3001, vector<int>(3001, -1));
        for(int i = 0; i < keys.size(); i ++)
            for(int j = i; j < keys.size(); j ++){
                int a = keys[i], b = keys[j], c = target - keys[i] - keys[j];
                if(c >= b){
                    if(a == b && b == c)
                        res = (res + C(freq[a], 3, comb)) % MOD;
                    else if(a == b)
                        res = (res + (long long)C(freq[a], 2, comb) * freq[c]) % MOD;
                    else if(b == c)
                        res = (res + freq[a] * (long long)C(freq[b], 2, comb)) % MOD;
                    else
                        res = (res + freq[a] * freq[b] * freq[c]) % MOD;
                }
                else
                    break;
            }
        return res;
    }

private:
    int C(int m, int n, vector<vector<int>>& comb){

        if(n > m)
            return 0;

        if(n == 0 || m == n)
            return 1;

        if(comb[m][n] != -1)
            return comb[m][n];

        return comb[m][n] = (C(m - 1, n, comb) + C(m - 1, n - 1, comb)) % MOD;
    }
};
