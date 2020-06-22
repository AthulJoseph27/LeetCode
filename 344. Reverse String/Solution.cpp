class Solution {
    void Reverse(vector<char>& s,int l,int r){
        if(l>=r) return;
        char tmp = s[l];
        s[l]=s[r];
        s[r] = tmp;
        Reverse(s,++l,--r);
    }
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        Reverse(s,0,s.size()-1);
    }
};344. Reverse String
