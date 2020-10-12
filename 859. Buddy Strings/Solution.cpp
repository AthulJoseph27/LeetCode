class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A == B){
            int count[26] = {0};
            for(char c:A)
                count[c-'a']++;
            for(int i:count)
                if(i > 1) return true;
            
            return false;
        }
        if(A.size() != B.size()) return false;
        
        int diff = 0;
        
        for(int i=0;i<A.size();i++){
            if(diff > 2) return false;
            if(A[i]!=B[i]) diff++;
        }
        if(diff!=2)return false;
        
        int count[26] = {0};
        
        for(char c:A)
            count[c-'a']++;
        
        for(char c:B)
                count[c-'a']--;
        
        for(int i:count)
            if(i > 0) return false;
        
        return true;
    }
};
