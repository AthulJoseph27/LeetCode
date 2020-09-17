class Solution {
public:
    bool isRobotBounded(string ins) {
        int x = 0,y = 0,dir=0;
        for(char c:ins){
            if(c == 'L') dir++;
            else if(c == 'R') dir--;
            else{
                if(dir==0) y++;
                else if(dir == 1 || dir == -3) x++;
                else if(dir == 2 || dir == -2) y--;
                else if(dir == 3 || dir == -1) x--;
                
            }
            dir = dir%4;
        }
        if(x==0 && y==0) return true;
        if(dir == 0) return false;
        return true;
    }
};
