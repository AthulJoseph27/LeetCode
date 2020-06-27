class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0) return false;
        int sum=0,n=num;
        for(int i=1;i<=num/2;i++)
            if(num%i==0){
                sum+=i;
                // num/=i;
            }
        
        cout<<sum<<endl;
        return sum==n;
    }
};
