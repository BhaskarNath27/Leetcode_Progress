class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mpp;

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mpp[nums[i]]++;
            }
        }

        
        int maxi=INT_MIN;
        for(auto it:mpp){
            maxi=max(maxi,it.second);
        }
        for(auto it: mpp){
            if(it.second==maxi){
                return it.first;
            }
        }
        return -1;


    }
};