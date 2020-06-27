class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,count=0;
        for(int i:nums){
            if(i==1) c++;
            else{
                count = max(count,c);
                c=0;
            }
        }
        return max(c,count);
    }
};
