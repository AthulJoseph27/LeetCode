class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mp;
        int n=min(t.size(),s.size());
        char ch;
        for(int i=0;i<n;i++){
            ch = mp[s[i]];
            if(ch!=0&&ch!=t[i]) return false;
            mp[s[i]]=t[i];
        }
     
        set<int>st;
        vector<int>v;
        for(auto it=mp.begin();it!=mp.end();it++){
            st.insert(it->second);
            v.push_back(it->second);
        }
        if(st.size()!=v.size()) return false;
        if(t.size()==n){
            for(int i=0;i<s.size();i++)
                if(mp[s[i]]==0){
                    // cout<<s[i];
                    return false;
                }
        }else{
            for(int i=0;i<t.size();i++)
                if(mp[t[i]]==0){
                    // cout<<t[i];
                    return false;
                }
        }
        return true;
    }
};
