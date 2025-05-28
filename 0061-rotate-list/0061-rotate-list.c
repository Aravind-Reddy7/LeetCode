/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    
    struct ListNode *temp = head;

    if(head == NULL)
        return NULL;

    int length = 0;
    while(temp) 
    {
        temp = temp->next;
        length += 1;
    }

    k = k % length;

    for(int i = 0; i < k; i++) 
    {
        int data1, data2 = head->val;
        temp = head;

        while(temp != NULL) 
        {
            if(temp->next == NULL)
                head->val = temp->val;

            data1 = temp->val;
            temp->val = data2;
            temp = temp->next;
            data2 = data1;
        }
    }

    return head;
}