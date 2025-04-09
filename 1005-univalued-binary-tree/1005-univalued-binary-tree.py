# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
        
        if not root:
            return True

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

        for num in result:
            if num != result[0]:
                return False

        return True

                