class Solution {
public:
    int help(string s) {
        int hrs = (s[0] - '0') * 10 + (s[1] - '0');
        int mins = (s[3] - '0') * 10 + (s[4] - '0');

        return hrs * 60 + mins;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i = 0; i < timePoints.size(); i++) {
            minutes.push_back(help(timePoints[i]));
        }

        sort(minutes.begin(), minutes.end());

        int ans = INT_MAX;

        for(int i = 1; i < minutes.size(); i++) {
            int diff = minutes[i] - minutes[i - 1];
            ans = min(ans, diff);
        }

        int midnightDiff =
            1440 - minutes[minutes.size() - 1] + minutes[0];

        ans = min(ans, midnightDiff);

        return ans;
    }
};