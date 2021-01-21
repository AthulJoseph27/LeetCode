class Solution {
    double factorial(int n){
        if(n<2)
            return 1;
        double f = 1;
        for(int i=1;i<=n;i++)
            f= f * (double)i;
        
        return f;
    }
public:
    int uniquePaths(int m, int n) {
        m -- ;
        n --;
        return (int)(round(factorial(m+n)/(factorial(n) * factorial(m))));
    }
};
