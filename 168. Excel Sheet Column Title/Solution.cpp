class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        if(n<27){
            s+=(char)(n+'A'-1);
            return s;
        }
        while(n>0){
            if(n%26==0){
                s='Z'+s;
                n--;
            }
            else
                s=(char)(n%26-1+'A')+s;
            n/=26;
        }
        return s;
    }
};
