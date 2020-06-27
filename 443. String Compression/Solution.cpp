class Solution {
public:
    int compress(vector<char>& chars) {
        int c=1;
        string tmp;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                c++;
                chars.erase(chars.begin()+i);
                i--;
            }else{
                if(c!=1){
                    tmp = to_string(c);
                    
                    for(char ch:tmp){
                        chars.insert(chars.begin()+i,ch);
                        i++;
                        }
            }
                c=1;
        }
        }
        if(c!=1){
            tmp = to_string(c);
            for(char ch:tmp){
                chars.push_back(ch);
                }
        }
        return chars.size();
    }
};
