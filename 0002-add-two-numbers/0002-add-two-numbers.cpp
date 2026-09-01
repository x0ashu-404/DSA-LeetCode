/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h = new ListNode(0);
        ListNode* temp = h;
        bool add = false;

        while(l1 != NULL or l2 != NULL){
            int val1 = 0;
            int val2 = 0;

            if(l1 != NULL){
                val1 = l1->val;
            }
            if(l2 != NULL){
                val2 = l2->val;
            }

            int carry = 0;
            if(add){
                carry = 1;
            }

            int value = val1 + val2 + carry;
            temp->next = new ListNode(value);
            temp = temp->next;

            if(value > 9){
                temp->val = value - 10;
                add = true;
            }else{
                add = false;
            }

            if(l1 != NULL){
                l1 = l1->next;
            }
            if(l2 != NULL){
                l2 = l2->next;
            }
        }

        if(add){
            temp->next = new ListNode(1);
        }

        return h->next;
    }
};