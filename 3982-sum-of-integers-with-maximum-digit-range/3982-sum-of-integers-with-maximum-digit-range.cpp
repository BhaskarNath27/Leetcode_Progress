class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        vector<int> ls;
        long long maxx=INT_MIN;
        for(int i=0;i<n;i++){
            long long d=0;
            d=nums[i];
            long long maxi=INT_MIN;
            long long mini=INT_MAX;
            long long ld=0;
            long long diff=0;
             

            while(d>0){
                ld=d%10;
                mini=min(mini,ld);
                maxi=max(maxi,ld);
                d=d/10;
            }
            diff=maxi-mini;
            if(diff>maxx){
                maxx=diff;
                ls.clear();
 
                ls.push_back(nums[i]); 
            }else if( diff==maxx){
                ls.push_back(nums[i]); 
            } 
            
        }
        long  long  sum=0;
        for(int j=0;j<ls.size();j++){
            sum=sum+ls[j];
        }
         
        return sum; 
    }
};