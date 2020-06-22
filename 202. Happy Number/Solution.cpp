class Solution {
public:
    bool isHappy(int n) {
        int num=0,j;
        for(int i=0;i<20;i++){
            num=0;
            j=n;
            while(j>0){
                num+=pow(j%10,2);
                j/=10;
            }
            n=num;
            if(n==1) return true;
        }
        return false;
    }
};
