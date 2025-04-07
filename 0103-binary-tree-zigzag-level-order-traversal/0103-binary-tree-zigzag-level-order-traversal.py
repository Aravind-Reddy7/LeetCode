# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        if root is None:
            return []

        queue = [root]
        result = []
        level = 0

        while queue:

            size = len(queue)
            values = []

            for i in range(size):
                node = queue.pop(0)

                if level % 2 == 1:
                    values.insert(0, node.val)
                else:
                    values.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

            result.append(values)
            level += 1

        return result