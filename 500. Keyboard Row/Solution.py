class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        r1 = ['q','w','e','r','t','y','u','i','o','p']
        r2 = ['a','s','d','f','g','h','j','k','l']
        r3 = ['z','x','c','v','b','n','m']
        ans = []
        for i in words:
            s = i.lower()
            if s[0] in r1:
                r = r1
            elif s[0] in r2:
                r=r2
            else:
                r = r3
            f=0
            for j in s:
                if j not in r:
                    f+=1
                    break
            
            if f==0:
                ans.append(i)
        
        return ans
