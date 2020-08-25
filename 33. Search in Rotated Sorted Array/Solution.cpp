// O(log(N)) Time and O(1) space
class Solution {
public:
    int search(vector<int>& nums, int target) {
      
        // Binary Searching for pivot
        
        int s=0,e=nums.size()-1,mid,n = nums.size(),p=-1;
        
        if(n == 0) return -1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        }else if(n==2){
            if(nums[0]==target) return 0;
            else if(nums[1]==target) return 1;
            else return -1;
        }
        n--;
        if(nums[0]>nums[1]){
            p = 0;
        }else{
        while(s<=e){
            mid = (s+e)/2;
            if(mid>0 && nums[mid]<nums[mid-1]){
                p = mid;
                break;
            }
            if(nums[mid]>nums[0]) s = mid+1;
            else e = mid-1;
        }
        }
        if(p==-1){
            s=0;
            e = n;
        }else{
            if(nums[p]==target) return p;
            if(target < nums[0]){
                s = p+1;
                e = n;
            }else{
                s = 0;
                e = p-1;
            }
        }
        // Binary Searching for the element
        
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
};
