class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
        const int MOD = 1e9 + 7;
        int m = r - l + 1;

        vector<long long> up(m + 1, 0), down(m + 1, 0);

        for(int val = 1; val <= m; val++) {
            up[val] = val - 1;
            down[val] = m - val;
        }

        for(int len = 3; len <= n; len++) {
            vector<long long> newUp(m + 1, 0), newDown(m + 1, 0);

            long long prefix = 0;
            for(int val = 1; val <= m; val++) {
                newUp[val] = prefix;
                prefix = (prefix + down[val]) % MOD;
            }

            long long suffix = 0;
            for(int val = m; val >= 1; val--) {
                newDown[val] = suffix;
                suffix = (suffix + up[val]) % MOD;
            }

            up = newUp;
            down = newDown;
        }

        long long ans = 0;
        for(int val = 1; val <= m; val++) {
            ans = (ans + up[val] + down[val]) % MOD;
        }

        return ans;
    }
};