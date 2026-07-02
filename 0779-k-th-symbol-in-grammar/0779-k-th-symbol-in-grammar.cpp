class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)
            return 0;
        int upper = kthGrammar(n-1,(k+1)/2);
        if(k%2==1)
            return upper;
        else
            return 1-upper;
    }
};