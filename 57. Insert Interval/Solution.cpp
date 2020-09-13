class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         if(intervals.size() == 0)
            return {newInterval};
        
        int start = newInterval[0],end = newInterval[1],f=0;
        vector<vector<int>>left;
        for(auto v:intervals){
            if(v[1] < start){
                left.push_back(v);
            }else if(v[0] > end){
               break;
            }else{
                start = min(start,v[0]);
                end = max(end,v[1]);
            }
            f++;
        }
        left.push_back({start,end});
        left.insert(left.end(),intervals.begin()+f,intervals.end());
        return left;
    }
};
