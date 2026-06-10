class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> allValues;

        for(auto list : lists){
            while(list != NULL){
                allValues.push_back(list->val);
                list = list->next;
            }
        }
        sort(allValues.begin(), allValues.end());

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (int val : allValues) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }

        return dummy->next;        
    }
};