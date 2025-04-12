# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        
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

        value = max(sum_list)

        for i in range(0, len(sum_list)):
            if value == sum_list[i]:
                return i+1