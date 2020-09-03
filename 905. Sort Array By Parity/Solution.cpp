class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n = A.size(),eve_pos=0;
        for(int i=0;i<n;i++)
           if(A[i]%2==0) swap(A[eve_pos++],A[i]);
        
        return A;
    }
};
