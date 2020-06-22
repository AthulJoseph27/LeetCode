class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        int p = ceil(log(n)/log(3));
        cout<<p;
        if(n == pow(3,p)) return true;
        return false;
    }
};
