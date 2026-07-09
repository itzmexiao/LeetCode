class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int column;
        if(ruleKey == "type")
            column = 0;
        else if(ruleKey == "color")
            column = 1;
        else 
            column = 2;
        int count=0;
        for(int i=0;i<items.size();i++){
            if(items[i][column]==ruleValue)
            count++;
        }
        return count;
    }
};