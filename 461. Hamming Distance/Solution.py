class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        x = bin(x)[2:]
        y = bin(y)[2:]
        
        s = abs(len(x)-len(y))
        if s!=0:
            a = s*'0'
            if len(y)>len(x):
                x = a+x
            else:
                y = a+y
        
        c=0
        for i in range(len(x)):
            if x[i]!=y[i]:
                c+=1
        
        return c
