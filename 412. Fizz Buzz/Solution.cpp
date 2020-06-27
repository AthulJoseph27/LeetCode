class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        bool b1,b2;
        for(int i=1;i<=n;i++){
            b1 = (i%5==0);
            b2=(i%3==0);
            if(b1&&b2) ans.push_back("FizzBuzz");
            else if(b1)ans.push_back("Buzz");
            else if(b2)ans.push_back("Fizz");
            else ans.push_back(to_string(i));
        }
            return ans;
    }
};
