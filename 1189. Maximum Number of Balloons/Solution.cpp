class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int mp[26]={0};
        
        for(char c:text) mp[c-'a']++;
        
        int c=0;
        
        while(true){
            mp[1] -=1;
            mp[0] -=1;
            mp[11] -=2;
            mp[14] -=2;
            mp[13] -=1;
            if(mp[1] >=0 && mp[0] >= 0 && mp[11] >= 0 && mp[13] >= 0 && mp[14] >= 0) c++;
            else break;
        }
        
        return c;
    }
};
