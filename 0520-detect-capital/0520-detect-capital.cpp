class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0;
        int n=word.length();

        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                cnt++;
            }
        }
        if(cnt==n) return true;
        else if(cnt==0) return true;
        else if(cnt==1 && isupper(word[0])) return true;
        else return false;
    }
};