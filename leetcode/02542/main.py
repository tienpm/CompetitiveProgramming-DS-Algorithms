"""
    author: Tien M. Pham
    created: 25.05.2023
    description: https://leetcode.com/problems/maximum-subsequence-score/
    status: AC

"""

from typing import List
import heapq
from operator import itemgetter

class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        ans = -1
        sumNum1 = 0
        minHeapNum1 = []
        g = list(sorted(zip(nums1, nums2), key = itemgetter(1), reverse = True))
        for num1, num2 in g:
            sumNum1 += num1
            heapq.heappush(minHeapNum1, num1)
            if len(minHeapNum1) == k:
                ans = max(ans, sumNum1 * num2)
                sumNum1 -= heapq.heappop(minHeapNum1)

        return ans

if __name__ == "__main__":
    n, k = [int(x) for x in input().split()]
    nums1 = [int(x) for x in input().split()]
    nums2 = [int(x) for x in input().split()]

    sol = Solution()
    print(sol.maxScore(nums1, nums2, k))
