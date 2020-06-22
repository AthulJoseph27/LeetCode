class Solution {
public:
    bool isUgly(int num) {
        if(num <= 0) return false;
        for(int i:{2,3,5}){
            while(num%i==0){
                num/=i;
            }
            if(num==1) return true;
        }
        if(num==1) return true;
        return false;
    }
};
