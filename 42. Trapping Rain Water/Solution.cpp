class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>L={0};
        vector<int>R={0};
        int n = height.size(),A=0;
        for(int i=0;i<n;i++){
            L.push_back(max(height[i],L[i]));
            R.insert(R.begin(),max(height[n-i-1],R[0]));
        }
        L.erase(L.begin());
        R.pop_back();
        for(int i=1;i<n;i++){
            A+=max((min(L[i],R[i])-height[i]),0);
        }
        return A;
    }
};
