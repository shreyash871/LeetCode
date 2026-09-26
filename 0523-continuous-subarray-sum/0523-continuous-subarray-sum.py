class Solution:
    def checkSubarraySum(self, nums, k):
        seen = {0: -1}
        total = 0

        for i, x in enumerate(nums):
            total = (total + x) % k

            if total in seen:
                if i - seen[total] >= 2:
                    return True
            else:
                seen[total] = i

        return False