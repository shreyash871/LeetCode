class Solution:
    def getMaxLen(self, nums):
        pos = neg = ans = 0

        for x in nums:
            if x == 0:
                pos = neg = 0
            elif x > 0:
                pos += 1
                neg = neg + 1 if neg else 0
            else:
                pos, neg = (neg + 1 if neg else 0), pos + 1

            ans = max(ans, pos)

        return ans