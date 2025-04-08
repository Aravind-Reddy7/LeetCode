# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        
        queue = [root]
        result = []

        while queue:

            values = []
            size = len(queue)

            for i in range(0, size):
                node = queue.pop(0)
                values.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

            result.append(values)

        return result[len(result)-1][0]
                