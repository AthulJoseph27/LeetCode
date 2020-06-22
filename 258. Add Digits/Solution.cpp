class Solution {
public:
    int addDigits(int num) {
        int n;
        while(num/10>0){
            n=0;
            for(int i=num;i>0;i/=10)
                n+=+i%10;
            num=n;
        }
        return num;
    }
};
