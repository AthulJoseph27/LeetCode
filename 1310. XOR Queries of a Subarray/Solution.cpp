class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        int n = arr.size();
        
        vector<int>prefs(n,0);
        
        prefs[0] = arr[0];
        
        for(int i=1;i<n;i++){
            prefs[i] = prefs[i-1] ^ arr[i];
        }
        
        vector<int>answers;
        
        for(auto &v:queries){
            if(v[0] == 0){
                answers.push_back(prefs[v[1]]);
            }else{
                answers.push_back(prefs[v[1]] ^ prefs[v[0]-1]);
            }
        }
        
        
        
        return answers;
    }
};
