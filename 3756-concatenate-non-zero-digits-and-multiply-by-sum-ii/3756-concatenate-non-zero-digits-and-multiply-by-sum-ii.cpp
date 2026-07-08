class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        long long MOD = 1000000007;

        vector<int> pos;
        vector<int> digits;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '0') {
                pos.push_back(i);
                digits.push_back(s[i] - '0');
            }
        }

        int k = digits.size();

        vector<long long> power(k + 1, 1);
        for(int i = 1; i <= k; i++) {
            power[i] = (power[i - 1] * 10) % MOD;
        }

        vector<long long> prefixVal(k + 1, 0);
        vector<long long> prefixSum(k + 1, 0);

        for(int i = 0; i < k; i++) {
            prefixVal[i + 1] = (prefixVal[i] * 10 + digits[i]) % MOD;
            prefixSum[i + 1] = prefixSum[i] + digits[i];
        }

        vector<int> ans;

        for(int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];

            int left = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int right = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            if(left > right) {
                ans.push_back(0);
                continue;
            }

            int len = right - left + 1;

            long long x = prefixVal[right + 1] - (prefixVal[left] * power[len]) % MOD;
            x = (x + MOD) % MOD;

            long long sum = prefixSum[right + 1] - prefixSum[left];

            long long res = (x * sum) % MOD;

            ans.push_back(res);
        }

        return ans;
    }
};