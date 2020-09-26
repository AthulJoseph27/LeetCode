class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==0 || duration == 0) return 0;
        int t=0,nxt=0;
        for(int i:timeSeries){
            if(i>nxt){
                t+=duration;
                nxt = i+duration;
            }else{
                t+=(i+duration-nxt);
                nxt = i+duration;
            }
        }
        return t;
    }
};

