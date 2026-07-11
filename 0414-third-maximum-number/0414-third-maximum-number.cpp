class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int> v(st.begin(), st.end());
        if(v.size()<3){
            return v[0];
        }else{
            return v[2];
        }

    }
};