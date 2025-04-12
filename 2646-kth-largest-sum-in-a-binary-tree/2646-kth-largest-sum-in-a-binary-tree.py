# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        
        queue = [root]
        result = []

        while queue:

            size = len(queue)
            values = []

            for _ in range(size):
                node = queue.pop(0)
                values.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

            result.append(values)

        sum_list = []

        for item in result:
            sum_list.append(sum(item))

        if len(sum_list) <= k-1:
            return -1

        sum_list.sort(reverse = True)

        return sum_list[k-1]