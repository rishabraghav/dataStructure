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
    ListNode* reverse(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(current != nullptr) {
            current = current->next;
            temp->next = prev;
            prev = temp;
            temp = current;
        }
        return prev;
    }
    
    ListNode* mid(ListNode* head) {
        ListNode* current1 = head;
        ListNode* current2 = head;
        while(current2 != nullptr && current2->next != nullptr) {
            current1 = current1->next;
            current2 = current2->next->next;
        }
        return current1;
    }
        
    bool isPalindrome(ListNode* head) {
        ListNode* current = head;
        ListNode* middle = mid(head);
        ListNode* temp = reverse(middle);
        
         while(temp != nullptr) {
             if(current->val != temp->val) {
                 return false;
             }
             
             current = current->next;
             temp = temp->next;
         }
        return true;
    }
};