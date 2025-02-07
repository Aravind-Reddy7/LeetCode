/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == 0 || head->next == 0)
        return head;

        struct ListNode *head1 = 0, *temp;
        struct ListNode *tempA = head, *tempB;

        while(tempA != 0) {
            tempB = tempA->next;
            bool isDuplicate = false;

            while(tempB != 0 && tempA->val == tempB->val) {
                isDuplicate = true;
                tempB = tempB->next;
            }

            if(!isDuplicate) {
                if(head1 == 0) {
                    head1 = temp = tempA;
                    temp->next = 0;
                }
                else {
                    temp->next = tempA;
                    temp = tempA;
                    temp->next = 0;
                }
            }

            tempA = tempB;
        }

        if(temp == 0) {
            return head;
        }else {
            //temp->next = NULL;
            return head1;
        }

            
    }
};