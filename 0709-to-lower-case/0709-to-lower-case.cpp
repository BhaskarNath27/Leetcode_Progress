class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(!islower(s[i])){
                s[i]=tolower(s[i]);
            }
            
        }
        return s;
    }
};