class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* front = head->next;
        curr->next = NULL;

        while(front != NULL){
            ListNode* temp = front->next;
            front->next = curr; 
            curr = front;
            front = temp;
        }
        return curr;
    }
};