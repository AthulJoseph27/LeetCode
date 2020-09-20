class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return intervals;
        sort(intervals.begin(),intervals.end(),[&](auto v1, auto v2){
            return v1[0] < v2[0];
        });
        set<vector<int>>s;
        for(auto v:intervals)
        	s.insert(v);
        intervals.assign(s.begin(),s.end());
        for(int i=0;i<intervals.size()-1;i++){
            
            if(intervals[i+1][0]==intervals[i][0] && 
               intervals[i+1][1]==intervals[i][1]){
                intervals.erase(intervals.begin()+i+1);
            }
            if(intervals[i][0] == intervals[i][1]
                    &&intervals[i][1] == intervals[i+1][0]){
            	intervals.erase(intervals.begin()+i);
                i--;
                continue;
            }
            if(intervals[i][1] >= intervals[i+1][0]){
                intervals[i][1] = max(intervals[i+1][1],intervals[i][1]);
                intervals[i][0] = min(intervals[i][0],intervals[i+1][0]);
                intervals.erase(intervals.begin()+i+1);
                i--;
            }
        }
        return intervals;
    }
};
