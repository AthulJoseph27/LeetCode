class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0) return true;
        if(s.size()<2) return false;
        string s2="";
        for(char i:s){
            if(i=='(')s2+=')';
            else if(i=='[')s2+=']';
            else if(i=='{')s2+='}';
            else if(i==')'||i==']'||i=='}'){
                if(s2.size()==0||s2[s2.size()-1]!=i) return false;
                s2.erase(s2.end()-1);
            }
        }
        if(s2.size()>0) return false;
        return true;
    }
};
