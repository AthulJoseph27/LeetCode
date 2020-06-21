class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        int mn=INT_MAX,pos=-1;
        for(int i=0;i<strs.size();i++)
            if(mn>strs[i].size()){
                mn=strs[i].size();
                pos = i;
            }
        if(pos==-1||strs[pos]=="") return "";
        string s = strs[pos];
        strs.erase(strs.begin()+pos);
        string pref="";
        for(int j=0;j<s.size();j++){
            for(int i=0;i<strs.size();i++)
                if(strs[i][j]!=s[j]) return pref;
            pref+=s[j];
        }
        return pref;
    }
};
