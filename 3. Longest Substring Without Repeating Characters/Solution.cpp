class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,l,i=0;
        for(int l=0;l<s.size();l++){
            i=l;
            int a[256]={0};
            while(i<s.size() && a[s[i]]==0){
                a[s[i]]++;
                i++;
            }
            ans = max(i-l,ans);
            if(ans >= s.size()-l-1) return ans;
        }
        return ans;
    }
};
