class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        // int a = n/abs(n);
        // n=abs(n);
        int p = log(n)/log(2);
        if(n==pow(2,p)) return true;
        return false;
    }
};
