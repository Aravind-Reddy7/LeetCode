# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        

        temp1 = head
        temp2 = head

        while temp2:
            temp1 = temp1.next

            if not temp2.next :
                return False

            temp2 = temp2.next.next

            if temp1 == temp2 :
                return True

        return False