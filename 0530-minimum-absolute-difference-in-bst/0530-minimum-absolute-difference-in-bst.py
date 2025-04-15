# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        
        queue = [root]
        result = []

        while queue:

            size = len(queue)

            for item in range(size):

                node = queue.pop(0)
                result.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

        result.sort()
        min1 = 100000

        for i in range(1, len(result)):
            if abs(result[i-1] - result[i]) < min1:
                min1 = abs(result[i-1] - result[i])

        return min1
            
