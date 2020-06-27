class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // while(s.size()>0){
        //     if(s[0]!=t[0]) return t[0];
        //     s.erase(s.begin());
        //     t.erase(t.begin());
        // }
        // return t[0];
        int a[26]={0};
        for(char ch:s)
            a[ch-'a']++;
        for(char ch:t)
            a[ch-'a']--;
        for(int i=0;i<26;i++)
            if(a[i]<0) return (char)(i+'a');
        
        return '1';
    }
};
