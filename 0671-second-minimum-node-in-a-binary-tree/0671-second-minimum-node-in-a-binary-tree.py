# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        
        queue = [root]
        result = []

        while len(queue) > 0:

            size = len(queue)

            for i in range(size):
                node = queue.pop(0)
                result.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)

        result.sort()

        for i in range(0, len(result)):
            if i < len(result)-1 and result[i] != result[i+1] :
                return result[i+1]    

        return -1