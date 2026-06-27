class Solution {
public:
    int countSegments(string s) {
        int n =s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word=word+s[i];
                i++;
            }
            if(word!=""){
                cnt++;
            }
        }
        return cnt;
    }
};