class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0) return true;
        int s=1,e=num;
        long long mid;
        while(s<=e){
            mid = s+(e-s)/2;
            if(mid*mid==num) return true;
            if(mid*mid>num) e = mid-1;
            else s = mid+1;
        }
        return false;
        // int n = sqrt(num);
        // return n*n==num;
    }
};
