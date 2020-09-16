class Solution {
public:
    int arrangeCoins(int n) {
        double ans = (-1+pow((1+8*(long long)n),0.5))/2;
        return (int) ans;
        /*
             n = (N * (N+1))/2
             N^2 + N - 2n = 0;
             N = (-1 + root(1+8n))/2
             
        */
    }
};
