from collections import Counter

class Solution:
    def intersect(self, nums1, nums2):
        c = Counter(nums1)
        res = []

        for x in nums2:
            if c[x]:
                res.append(x)
                c[x] -= 1

        return res