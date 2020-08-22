class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int A=min(height[0],height.back())*(height.size()-1),l=0,r=height.size()-1;
        while(l<r){
            A = max(A,(r-l)*min(height[r],height[l]));
            if(height[r] >= height[l]) l++;
            else r--;
        }
        return A;
    }
};
