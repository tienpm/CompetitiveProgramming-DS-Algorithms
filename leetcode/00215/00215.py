from typing import List
import heapq
from functools import total_ordering

@total_ordering
class Wrapper:
    def __init__(self, val: int):
        self.val = val

    def __lt__(self, other) -> bool:
        return self.val > other.val

    def __eq__(self, other) -> bool:
        return self.val == other.val

class Solution(object):
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heapq._heapify_max(nums)
        for _ in range(k):
            topItem = heapq._heappop_max(nums)

        return topItem

    def findKthLargest01(self, nums: List[int], k: int) -> int:
        wrapper_heap = list(map(lambda item: Wrapper(item), nums))
        heapq.heapify(wrapper_heap)
        for _ in range(k):
            topItem = heapq.heappop(wrapper_heap)

        return topItem

if __name__ == "__main__":
    k = int(input())
    nums = [int(x) for x in input().split()]
    sol = Solution()
    kthLargest = sol.findKthLargest(nums, k)
    print(kthLargest)

