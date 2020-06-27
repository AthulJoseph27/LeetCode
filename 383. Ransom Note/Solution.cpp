class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int j,f=0;
        for(int i=0;i<ransomNote.size();i++){
            f=0;
            for(j=0;j<magazine.size();j++){
                if(magazine[j]==ransomNote[i]){
                    magazine.erase(magazine.begin()+j);
                    f++;
                    break;
                }
            }
            if(f==0) return false;
        }
        
        return true;
            
    }
};
