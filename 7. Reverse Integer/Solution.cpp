class Solution {
public:
    int reverse(int x) {
        bool b = x<0;
        x=abs(x);
        long n=0;
        for(int i=x;i>0;i/=10)
            n=n*10+i%10;
        if(b){
            n*=-1;
            if(n<INT_MIN) return 0;
            return n;
        }
        if(n>INT_MAX) return 0;
        return n;
    }
};
