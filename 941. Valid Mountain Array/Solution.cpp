class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3) return false;
        int peak=-1;
        for(int i=1;i<A.size()-1;i++){
            if(A[i-1] < A[i] && A[i] > A[i+1]){
                if(peak == -1) peak = i;
                else return false;
        }
        if((peak > 0 && A[i] <= A[i+1])||(A[i-1] >= A[i] && A[i] <= A[i+1])) return false;
    }
        if(peak == -1) return false;
        cout<<peak<<endl;
        return true;
    }
};
