class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        
        sort(A.begin(),A.end());
        
        if(A[0]>2) return "";
        
        int a=0,b=0,ta=-1,tb=-1;
        string f="",s="";
        
        do{
            a = A[1]*10+A[0];
            b = A[2]*10+A[3];
            if(a<24 && b < 60){
                if(a > ta){
                    ta = a;
                    tb = b;
                }else if(ta==a){
                    tb = max(tb,b);
                }
            }
        }while(next_permutation(A.begin(),A.end()));
        
        if(ta==-1) return "";
        if(ta<10) f+="0"+to_string(ta);
        else f=to_string(ta);
        if(tb<10) s+="0"+to_string(tb);
        else s = to_string(tb);
        return f+":"+s;
    }
};
