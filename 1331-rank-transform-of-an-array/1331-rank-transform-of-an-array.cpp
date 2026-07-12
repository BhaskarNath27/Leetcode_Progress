class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st;

        for(int i = 0; i < arr.size(); i++) {
            st.insert(arr[i]);
        }

        map<int, int> rank;

        int r = 1;

        for(auto value : st) {
            rank[value]=r;
            r++;
        }

        for(int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};