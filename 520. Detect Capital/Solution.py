class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        w = word
        if w.lower() == word:
            return True
        if w.upper() == word:
            return True
        
        if ord(w[0]) >= ord('A') and ord(w[0]) <= ord('Z'):
            w = w[1:]
            word = word[1:]
            if w.lower() == word:
                return True
            
        return False
