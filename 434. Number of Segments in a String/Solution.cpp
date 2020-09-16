class Solution {
public:
    int countSegments(string s) {
        if(s=="") return 0;
        s+=" ";
        int c=0;
        for(int i=s.size()-2;i>=0;i--)
            if(s[i+1] == ' ' && s[i] != ' ') c++;
        
        return c;
    }
};
