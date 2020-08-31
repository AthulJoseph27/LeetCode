class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_map<string,int>mp;
        
        for(string w:words) mp[w]++;
        
        sort(words.begin(),words.end(),[&](string a,string b){
            if(a.size()==b.size()) return a < b;
            return a.size() > b.size();
        });
        
        string tmp="";
        int f=0;
        
        for(string s:words){
            tmp="";
            f=0;
            for(int i=0;i<s.size();i++){
                tmp += s[i];
                if(mp[tmp]==0){
                    f++;
                    break;
                }
            }
            if(f==0) return s;
        } 
        return "";
    }
};720. Longest Word in Dictionary
