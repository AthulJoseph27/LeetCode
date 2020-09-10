class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp;
        int cows=0,bulls=0;
        for(char c:secret)
            mp[c]++;
        for(char c:guess)
            if(mp[c]>0){
                mp[c]--;
                cows++;
            }
        for(int i=secret.size()-1;i>=0;i--)
            if(secret[i]==guess[i]){
                bulls++;
                cows--;
            }
        
        return to_string(bulls)+'A'+to_string(cows)+'B';
    }
};
