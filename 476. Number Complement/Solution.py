class Solution:
    def findComplement(self, num: int) -> int:
        num = str(bin(num))[2:]
        n=0
        num = num[::-1]
        for i in range(len(num)):
            if num[i]=='0':
                n+=pow(2,i)
        
        return n
        
        
