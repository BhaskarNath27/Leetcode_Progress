class Solution {
public:
    int seccal(string s){
        int hr=(s[0]-'0')*10+(s[1]-'0');
        int min=(s[3]-'0')*10+(s[4]-'0');
        int sec=(s[6]-'0')*10+(s[7]-'0');

        return hr*3600+min*60+sec;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int start=seccal(startTime);
        int end=seccal(endTime);

        return end-start;

    }   
};