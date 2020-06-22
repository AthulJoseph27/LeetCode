class Solution {
public:
    string reverseVowels(string s) {
        string v="";
        char ch;
        for(char c:s){
            ch = tolower(c);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v+=c;
        }
        
       reverse(v.begin(),v.end());
        // cout<<v<<endl;
       int i=0;
        string s2="";
       for(int j=0;j<s.size();j++){
           ch = tolower(s[j]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            s2+= v[i]; 
            i++;
        }else{
            s2+=s[j];
        }
        }
            return s2;
    }
};
