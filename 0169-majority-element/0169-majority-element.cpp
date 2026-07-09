class Solution {
public:
    int majorityElement(vector<int>& nums) {
        long n=nums.size();
        long long minc=n/2;

        map<long,long> freq ;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;        
        }

        for(auto it : freq){
            if(it.second>minc){
                return it.first;
            }
        }
        return 0;
    }
};