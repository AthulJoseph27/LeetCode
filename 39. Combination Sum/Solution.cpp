class Solution {
    vector<vector<int>>ans;
    void sol(int s,vector<int>&candidates, vector<int>tmp, int target){
        if(target == 0){
            ans.push_back(tmp);
            return;
        }
        for(int i=s;i<candidates.size();i++){
            if(candidates[i] > target) return;
            else{
                tmp.push_back(candidates[i]);
                sol(i,candidates,tmp,target-candidates[i]);
                tmp.pop_back();
        }
    }
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        sol(0,candidates,{},target);
        return ans;
    }
};
