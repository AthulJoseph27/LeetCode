class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        bool isPrime[n];
        int count=0;
        for(int i=0;i<n;i++)
            isPrime[i]=true;
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=4;i<n;i+=2)
            isPrime[i]=false;
        for(int i=3;i*i<n;i++){
            if(!isPrime[i]) continue;
            for(int j=i*i;j<n;j+=i)
                isPrime[j]=false;
        }
        for(int i=0;i<n;i++)
            if(isPrime[i]) count++;
        
        return count;
    }
};
