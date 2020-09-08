class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>count(1001,0);
        for(int i:A)
            count[i]++;
        int j=0;
        for(int i=0;i<1001;i+=2){
            while(count[i]>0){
                A[j]=i;
                count[i]--;
                j+=2;
            }
        }
        j=1;
        for(int i=1;i<1001;i+=2){
            while(count[i]>0){
                A[j]=i;
                count[i]--;
                j+=2;
            }
        }
        return A;
        
        vector<int>ans(A.size(),0);
        // int odd_pos = 1,even_pos = 0;
        // for(int i=0;i<A.size();i++){
        //     if(A[i]%2==0){
        //         ans[even_pos] = A[i];
        //         even_pos += 2;
        //     }else{
        //         ans[odd_pos] = A[i];
        //         odd_pos += 2;
        //     }
        // }
        // return ans;
    }
};
