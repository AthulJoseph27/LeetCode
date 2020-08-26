class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,n=nums.size(),i=0,N=n,t=0;
        while(i<n&&(t+z)<=N){
            if(nums[i]==2 && i < n-t){
                nums.erase(nums.begin()+i);
                nums.push_back(2);
                t++;
            }else if(nums[i]==0 && i > z){
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin(),0);
                z++;
            }else{
                i++;
            }
        }
    }
};
