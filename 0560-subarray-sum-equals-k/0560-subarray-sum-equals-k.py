class Solution:
    def subarraySum(self, nums, k):
        freq = {0: 1}
        total = ans = 0

        for x in nums:
            total += x
            ans += freq.get(total - k, 0)
            freq[total] = freq.get(total, 0) + 1

        return ans