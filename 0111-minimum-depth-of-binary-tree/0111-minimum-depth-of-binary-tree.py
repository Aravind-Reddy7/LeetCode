# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        
        if not root:
            return 0
            
        queue = [root]
        count = 1
        
        while queue:

            size = len(queue)

            for _ in range(size):
                node = queue.pop(0)

                if node.left == None and node.right == None:
                    return count
                
                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

            count += 1

        return count
