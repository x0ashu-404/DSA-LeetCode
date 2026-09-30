class Solution:
    def countOdds(self, low: int, high: int) -> int:
        count = 0
        if (high%2 != 0 or low%2 != 0) :
            count = ((high-low)//2)+1
        elif (high%2 == 0 and low%2 == 0) :
            count = (high-low+1)//2
        

        return count