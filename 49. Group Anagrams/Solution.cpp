class Solution {
    string getKey(string s){
        sort(s.begin(),s.end());
        return s;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            mp[getKey(s)].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it=mp.begin();it!=mp.end();it++)
            ans.push_back(it->second);
        
        return ans;
    }
};
