class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        for(char ch:s)
            mp1[ch]++;
        for(char ch:t)
            mp1[ch]--;
        for(auto it=mp1.begin();it!=mp1.end();it++)
            if(it->second!=0) return false;
        return true;
    }
};
