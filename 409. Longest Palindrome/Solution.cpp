class Solution {
public:
    int longestPalindrome(string s) {
        int c = 0,o=0,tmp;
        unordered_map<char,int>mp;
        for(char i:s)
            mp[i]++;
        for(auto it=mp.begin();it!=mp.end();it++){
            tmp = it->second;
            if(tmp%2==1){
                if(tmp>o){
                    c+=max((o-1),0);
                    o = tmp;
                }
                else c+=(tmp-1);
            }else c+=tmp;
        }
        c+=o;
        return c;
    }
};
