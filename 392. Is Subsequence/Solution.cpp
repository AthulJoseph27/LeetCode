class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        if(s.size()==0) return true;
        int sSize=s.size(),sInd=0;
        for(int i=0;i<t.size()&&sInd<sSize;i++)
            if(t[i]==s[sInd])sInd++;
        
        return sInd==sSize;
        // while(t.size()>=s.size()){
        //     if(s.size()==0) return true;
        //     if(t[0]!=s[0]){
        //         t.erase(t.begin());
        //         continue;
        //     }
        //     t.erase(t.begin());
        //     s.erase(s.begin());
        // }
        // return false;
    }
};
