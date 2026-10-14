class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        max_sum = 0

        for i in range(0, len(accounts)):
            sum = 0
            for j in range(0, len(accounts[i])):
                sum += accounts[i][j]

            if sum > max_sum:
                max_sum = sum
            
        
        return max_sum