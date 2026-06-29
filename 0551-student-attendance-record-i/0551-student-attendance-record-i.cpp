class Solution {
public:
    bool checkRecord(string s) {
        int absentCount=0;
        int lateStreak=0;
        for(char c : s){
            if(c == 'A'){
                absentCount++;
                lateStreak=0;
            }else if(c == 'L'){
                lateStreak++;
            }else{
                lateStreak=0;
            }
            if(absentCount > 1) return false;
            if(lateStreak > 2) return false;
        }
        return true;
    }
};