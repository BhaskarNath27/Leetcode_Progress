#define ll long long 
class Solution {
public:
    bool isPerfectSquare(int num) {
        ll low=1;
        ll high=num;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(mid*mid==num){
                return true;
            }else if(mid*mid>num){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
};