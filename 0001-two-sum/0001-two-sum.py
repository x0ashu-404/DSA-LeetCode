class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        n = len(nums)
        dict = {}

        for i in range(n):
            rem = target - nums[i]

            if rem in dict:
                return [dict[rem], i]
            else:
                dict[nums[i]] = i