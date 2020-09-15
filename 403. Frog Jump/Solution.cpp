class Solution:
    def canCross(self, stones: List[int]) -> bool:
        from functools import lru_cache
        
        end = stones[-1]
    
        pos_set = set(stones)

        @lru_cache(maxsize=None)
        def jump(curr_val, k):

            
            if curr_val not in pos_set or curr_val < 0 or k <= 0:
                return False


            if curr_val == end:
                return True

            return jump(curr_val + k - 1, k - 1) or jump(curr_val + k, k) or jump(curr_val + k + 1, k + 1)


        return jump(1, 1)
