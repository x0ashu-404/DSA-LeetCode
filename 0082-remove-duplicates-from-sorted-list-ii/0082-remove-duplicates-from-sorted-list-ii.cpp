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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* last = dummy;
        ListNode* curr = head;

        while(curr){
            if(curr->next == NULL or curr->next->val != curr->val){
                last = curr;
                curr = curr->next;
            }else{
                while(curr->next and curr->val == curr->next->val){
                    curr = curr->next;
                }
                curr = curr->next;
                last->next = curr;
            }
        }
        return dummy->next;
    }
};