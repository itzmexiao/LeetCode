class Solution {
public:
    bool check(string word, unordered_set<string>& st){
        if(word.size() == 1)
            return st.count(word);
        if(!st.count(word))
            return false;
        word.pop_back();
        return check(word, st);
    }
    string longestWord(vector<string>& words) {
         unordered_set<string> st(words.begin(), words.end());
         string ans = "";
         for(string w : words){
            if(check(w, st)){
                if(w.size() > ans.size())
                    ans = w;
                else if(w.size() == ans.size() && w < ans)
                    ans = w;
            }
         }
         return ans;
    }
};