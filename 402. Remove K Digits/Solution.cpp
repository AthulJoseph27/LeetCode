class Solution {
public:
    string removeKdigits(string s, int k) {
        if(s.size() == k) return "0";
        string t="";
        for(char c:s){
            while(t.size()>0 && k>0 && t.back() > c){
                k--;
                t.erase(t.end()-1);
            }
            t+=c;
        }
        while(t.size()>0&&t[0]=='0') t.erase(t.begin());
        while(k>0){
            t.erase(t.end()-1);
            k--;
        }
        if(t=="") return "0";
        return t;
    }
};
