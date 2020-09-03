class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m = arr.back(),tmp;
        arr[arr.size()-1] = -1;
        for(int i=arr.size()-2;i>=0;i--){
            tmp = arr[i];
            arr[i] = m;
            m = max(m,tmp);
        }
        
        return arr;
    }
};
