class Solution:
    def moveZeroes(self, nums):
        j = 0

        for x in nums:
            if x != 0:
                nums[j] = x
                j += 1

        while j < len(nums):
            nums[j] = 0
            j += 1