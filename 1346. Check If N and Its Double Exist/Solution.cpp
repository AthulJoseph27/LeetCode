class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
    
// O(N)
        unordered_map<int,int>mp;
        for(int i:arr)
            if(mp[i*2]!=0 || (mp[i/2]!=0 && ((int)i/2)*2==i)) return true;
            else {
                mp[i]++;
            }
        return false;
        
// O(Nlog(N))

//         sort(arr.begin(),arr.end());
//         int N=arr.size();
//         auto bns = [&](int target,int s){
//             int e=N-1,mid;
//             if(target < 0){
//                 e = s-2;
//                 s=0;
//             }
//             while(s<=e){
//                 mid = (s+e)/2;
//                 if(arr[mid]==target) return true;
//                 else if(arr[mid]>target) e=mid-1;
//                 else s = mid+1;
//             }
//             return false;
//         };
//         for(int i=0;i<N;i++)
//             if(bns(arr[i]*2,i+1)) return true;
        
//         return false;
    }
};
