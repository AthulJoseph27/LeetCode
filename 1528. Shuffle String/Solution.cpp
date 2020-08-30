class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char>shf(s.size());
        for(int i=0;i<s.size();i++)
            shf[indices[i]] = s[i];
        
        s="";
        for(char c:shf)
            s+=c;
        
        return s;
    }
};
