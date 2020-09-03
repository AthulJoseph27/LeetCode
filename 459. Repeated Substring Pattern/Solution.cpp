class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()<=1) return false;
        int n = s.size(),i=1;
        string sub,tmp="";
        while(i<n){
            if(n%i!=0){
                i++;
                continue;
            }
            sub="";
            tmp="";
            for(int j=0;j<i;j++)
                sub+=s[j];
            for(int j=n/i;j>0;j--)
                tmp+=sub;
            if(tmp==s) return true;
            i++;
        }
        return false;
    }
};
