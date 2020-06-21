class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0) return{1};
        if(n==1)  return{1,1};
        vector<vector<int>>tr={{1},{1,1}};
        vector<int>tmp;
        for(int i=3;i<=n+1;i++){
            tmp={1};
            for(int j=1;j<i-1;j++)
                tmp.push_back(tr[i-2][j]+tr[i-2][j-1]);
            tmp.push_back(1);
            tr.push_back(tmp);
        }
        
        return tr[n];
    }
};
