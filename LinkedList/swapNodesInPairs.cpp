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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* nxt = head->next;
        
        head = head->next;

        
        while(nxt) {
            
            if(prev) prev->next = nxt;
            
            current->next = nxt->next;
            nxt->next = current;
            
            prev = current;
            current = current->next;
            
            if(current) nxt = current->next;
            else break;
            
        }
        return head;
    }
};