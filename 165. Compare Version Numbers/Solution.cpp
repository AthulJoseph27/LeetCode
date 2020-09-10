class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>f1,f2;
        string s="";
        int x;
        v1+='.';
        v2+='.';

        for(char c:v1){
            if(c!='.') s+=c;
            else{
                stringstream cio(s);
                cio>>x;
                s="";
                f1.push_back(x);
            }
        }
        s="";
        for(char c:v2){
            if(c!='.') s+=c;
            else{
                stringstream cio(s);
                cio>>x;
                s="";
                f2.push_back(x);
            }
        }
        
        while(f1.size()<4) f1.push_back(0);
        while(f2.size()<4) f2.push_back(0);
        
        for(int i=0;i<4;i++){
            if(f1[i]==f2[i]) continue;
            if(f1[i]>f2[i]) return 1;
            if(f1[i]<f2[i]) return -1;
        }
        return 0;
    }
};
