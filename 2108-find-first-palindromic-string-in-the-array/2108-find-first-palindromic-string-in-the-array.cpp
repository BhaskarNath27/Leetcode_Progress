class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int st=0;
            int end=words[i].length()-1;
            bool flag=true;
            while(st<end){
                if(words[i][st++]!=words[i][end--]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                return words[i];
            }

        }
        return "";
    }
};