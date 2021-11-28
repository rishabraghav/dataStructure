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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* current = l3;
        int val;
        int temp = 0;
        while(l1 != nullptr && l2 != nullptr) {
            val = l1->val + l2->val + temp;
            temp = 0;
            if(val > 9) {
                int rem = val % 10;
                ListNode* node = new ListNode(rem);
                current->next = node;
               
                temp = val / 10;
            } else {
                ListNode* node = new ListNode(val);
                current->next = node;
            }
            current = current->next;
            l1= l1->next;
            l2 = l2->next;
        }
        return l3->next;
    }
};