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
        if(head == NULL || head->next == NULL) return head;

        ListNode *prev = NULL;
        ListNode *temp = NULL;
        ListNode *current = head;

        while(current != NULL){
            if(prev == NULL){
                prev = current;
                temp = prev;
                current = current->next;
                continue;
            }
            if(current -> val == prev -> val){
                current = current -> next;
                if(current == NULL) prev-> next = NULL;
            }
            else {
                prev-> next = current;
                prev = current;
                current = current->next;
            }
        }
        return temp;
    }
};
