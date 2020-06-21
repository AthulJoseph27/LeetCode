class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s2="";
        for(char ch:s){
            if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
                s2+=ch;
        }
        int n=s2.size();
        for(int i=0;i<s2.size()/2;i++)
            if(s2[i]!=s2[n-i-1]) return false;
        return true;
    }
};
