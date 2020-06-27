class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        for(int i=0;i<s.size();i++){
            if(l>2||a>1) return false;
            if(s[i]=='A'){
                a++;
                l=0;
            }
            else if(s[i]=='L')l++;
            else l=0;
        }
        if(l>2||a>1) return false;
        return true;
    }
};
