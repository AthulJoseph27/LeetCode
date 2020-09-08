class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string s="";
        str+=' ';
        vector<string>pt;
        for(char c:str){
            if(c==' '){
                pt.push_back(s);
                s="";
            }else s+=c;
        }
        if(pt.size()!=pattern.size()) return false;
        
        unordered_map<char,string>mp;
        unordered_map<string,char>mp2;

        for(int i=pattern.size()-1;i>=0;i--){
            mp2[pt[i]] = pattern[i];
            mp[pattern[i]] = pt[i];
        }
        
        if(mp.size()!=mp2.size()) return false;
        
        s = "";
        
        for(char c:pattern){
            if(mp.count(c) != 1 || mp2.count(mp[c]) != 1) return false;
            s=s+mp[c]+' ';
        }
    
        return s==str;
            
            
    }
};
