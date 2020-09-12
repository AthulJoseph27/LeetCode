class Solution {
    vector<vector<int>>ans;
    int j;
    void comb(int s,int k,int n,vector<int>tmp){
        if(k==1){
            if(tmp.back() == n || n > 9 ) return;
            tmp.push_back(n);
            ans.push_back(tmp);
            tmp.clear();
            return;
        }
        for(int i=s+1;i<=n/k;i++){
            tmp.push_back(i);
            comb(i,k-1,n-i,tmp);
            tmp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        j=k;
        comb(0,k,n,{});
        return ans;
    }
};
