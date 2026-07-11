class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            st.insert(nums1[i]);
        }
        unordered_set<int> common;

        for(int i=0;i<n2;i++){
            if(st.count(nums2[i])){
                common.insert(nums2[i]);
            }
        }

        vector<int> ans;
        for(auto it : common){
            ans.push_back(it);
        }

        return ans;

        
    }
};