# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        if root is None:
            return []

        queue = [root]
        result = []

        while len(queue) > 0:

            size = len(queue)
            values = []

            for _ in range(0, size):
                node = queue.pop(0)
                values.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

            result.insert(0, values)

        return result

