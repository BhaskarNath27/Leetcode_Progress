class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        long long n=arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0]!=1){
            arr[0]=1;
        }
        for(long long i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])>1){
                arr[i+1]=arr[i]+1;
            }
        }

        sort(arr.begin(),arr.end(),greater<int>());
        return arr[0];
    }
};