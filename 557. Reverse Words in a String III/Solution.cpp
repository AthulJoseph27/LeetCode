class Solution {
    string R(string s){
        reverse(s.begin(),s.end());
        return s;
    }
public:
    string reverseWords(string s) {
        if(s=="") return "";
        string t="";
        s+=" ";
        string ans="";
        for(char ch:s){
            if(ch==' '){
                ans+=R(t)+" ";
                t="";
            }else{
                t+=ch;
            }
        }
        
        ans.erase(ans.end()-1);
        return ans;
    }
};
