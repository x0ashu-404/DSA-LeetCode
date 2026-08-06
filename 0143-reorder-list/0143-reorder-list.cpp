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
    void reorderList(ListNode* head) {
       ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* reversed = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(reversed != NULL){
            next = reversed->next;
            reversed->next = prev;
            prev = reversed;
            reversed = next;
        }

        ListNode* temp = head;
        while(prev!=NULL and temp != NULL){
            ListNode* temp2 = prev->next;
            temp = temp->next;
            head->next = prev;
            prev->next = temp;
            head = temp;
            prev = temp2;
        
        }   
    }
};