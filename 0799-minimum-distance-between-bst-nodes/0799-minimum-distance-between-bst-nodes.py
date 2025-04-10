# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        
        queue = [root]
        result = []

        while queue:

            size = len(queue)

            for i in range(size):
                node = queue.pop(0)
                result.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

        result.sort()
        n = len(result)
        min_val = 100000

        for i in range(0, n-1):
            val = result[i+1] - result[i]

            if val < min_val:
                min_val = val

        return min_val