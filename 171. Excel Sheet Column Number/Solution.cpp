class Solution {
public:
    long long titleToNumber(string s) {
        long long n=0;
        for(char ch:s)
            n=n*26+ch-'A'+1;
        
        return n;
    }
};
