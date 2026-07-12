class Solution {
public:
    int help(string s){
        int hrs=(s[0]-'0')*10+(s[1]-'0');
        int mins=(s[3]-'0')*10+(s[4]-'0');

        return hrs*60+mins;
    }
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int s1=help(event1[0]);
        int e1=help(event1[1]);
        int s2=help(event2[0]);
        int e2=help(event2[1]);


        if(max(s1,s2)<=min(e1,e2)){
            return true;
        }else return false;
    }
};