class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string>mp;
        vector<string>words;
        string s="";
        str+=" ";
        for(char ch:str)
            if(ch==' '){
                words.push_back(s);
                s="";
            }
            else s+=ch;
        set<string>s1;
        set<char>s2;
        for(string st:words)
            s1.insert(st);
        for(char ch:pattern)
            s2.insert(ch);
        if(s1.size()!=s2.size()) return false;
        if(words.size()!=pattern.size()) return false;
        for(int i=0;i<pattern.size();i++)
            mp[pattern[i]]=words[i];
        s="";
        for(int i=0;i<pattern.size();i++)
            s=s+mp[pattern[i]]+" ";
        return str==s;
    }
};
