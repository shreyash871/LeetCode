class Solution:
    def nextGreaterElement(self, nums1, nums2):
        stack = []
        nxt = {}

        for x in nums2:
            while stack and stack[-1] < x:
                nxt[stack.pop()] = x
            stack.append(x)

        return [nxt.get(x, -1) for x in nums1]