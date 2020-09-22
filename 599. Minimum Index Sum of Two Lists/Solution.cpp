class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mp_name;
        unordered_map<string,int>mp_index;
        
        for(int i=0;i<list1.size();i++){
            mp_name[list1[i]]++;
            mp_index[list1[i]] += i;
        }
        for(int i=0;i<list2.size();i++){
            mp_name[list2[i]]++;
            mp_index[list2[i]] += i;

        }
        vector<string>ans;
        int ind = INT_MAX,count = 2;
        for(auto it=mp_name.begin();it!=mp_name.end();it++)
            if(it->second >= count){
                
                if(ind < mp_index[it->first]) continue;
                if(ind > mp_index[it->first] || it->second > count){
                    ans.clear();
                }
                ans.push_back(it->first);
                count = it->second;
                ind = mp_index[it->first];
            }
        
        return ans;
    }
};
