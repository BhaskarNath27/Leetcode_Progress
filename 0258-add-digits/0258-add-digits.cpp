class Solution {
public:
    int addDigits(int num) {
        long long sum =0;

        
        while(true){
            int ld=num%10;
            num=num/10;
            sum=sum+ld;
            if(num==0){
                if(sum<=9){
                    return sum;
                }else{
                    num=sum;
                    sum=0;
                }
            }
        }
        return -1;
    }
};