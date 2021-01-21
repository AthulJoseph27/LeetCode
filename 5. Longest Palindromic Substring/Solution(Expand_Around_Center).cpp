class Solution {
    int min(int a,int b){
        if(a > b) return b;
        return a;
    }
    bool ispalindrome(string s){
        int n = s.size();
        for(int i=0;i<n/2;i++)
            if(s[i]!=s[n-1-i]) return false;
        return true;
    }
    
public:
    string longestPalindrome(string s) {
        if(s == "") return "";
        if(ispalindrome(s)) return s;
        string pal = "",tmp;
        pal+=s[0];
        int N = 2*s.size()-1,l,i,a,b,n=s.size();
        for(int c=0;c<N;c++){
            if(c%2==0){
                l = c/2;
                l = min(l,s.size()-l);
                if(2*l+1 <= pal.size()) continue;
                i = 1;
                a = c/2-1;
                b = c/2+1;
                tmp = s[c/2];
                while(a >= 0 && b < n && s[a]==s[b]){
                    tmp = s[a]+tmp+s[b];
                    i++;
                    a = c/2-i;
                    b = c/2+i;
                }
                if(pal.size()<tmp.size()) pal = tmp;
            }else{
                l = c/2+1;
                l = min(l,s.size()-l);
                i = 0;
                tmp = "";
                if(2*l <= pal.size()) continue;
                a = (c-1)/2-i;
                b = (c+1)/2+i;    
                while(a >= 0 && b < n && s[a]==s[b]){
                    tmp = s[a]+tmp+s[b];
                    i++;
                    if(i>=c) break;
                    a = (c-1)/2-i;
                    b = (c+1)/2+i;
                }
                if(pal.size()<tmp.size()) pal = tmp;
            }
        }
        return pal;
    }
};
