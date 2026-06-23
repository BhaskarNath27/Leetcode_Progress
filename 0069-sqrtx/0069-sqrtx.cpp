#define ll long long

class Solution {
public:
    int mySqrt(int x) {

        if(x==0) return 0;
        ll low=1;
        ll high=x;
        ll ans=1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(mid*mid<=x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};