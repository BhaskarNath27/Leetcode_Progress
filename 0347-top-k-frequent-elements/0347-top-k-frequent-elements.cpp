class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        vector<int> ans;
        int res=0;
        
        
        while(k--){
            int maxi=-1;
            for(auto it:mpp){
                if(it.second>maxi){
                    maxi=it.second;
                    res=it.first;
                }
            }
            ans.push_back(res);
            mpp.erase(res);
            
        }
        return ans;
    }
};