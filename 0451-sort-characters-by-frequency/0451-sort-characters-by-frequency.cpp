class Solution {
public:
    string frequencySort(string s) {
        vector<int> freq(128, 0);

        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        vector<pair<int, char>> v;

        for(int i = 0; i < 128; i++) {
            if(freq[i] > 0) {
                v.push_back({freq[i], char(i)});
            }
        }

        sort(v.rbegin(), v.rend());

        string ans = "";

        for(int i = 0; i < v.size(); i++) {
            int count = v[i].first;
            char ch = v[i].second;

            while(count--) {
                ans += ch;
            }
        }

        return ans;
    }
};