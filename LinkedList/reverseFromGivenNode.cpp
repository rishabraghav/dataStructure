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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* current = new ListNode(0);
        current->next = head;
        ListNode* prev = current; 
    
        for(int i = 0; i< left-1; i++) prev = prev->next; 
    
        ListNode* start = prev->next; 
        ListNode* end = start->next; 
    
    
        for(int i=0; i<right-left; i++){
        
            start->next = end->next;
            end->next = prev->next;
            prev->next = end;
            end = start->next;
        }
    return current->next;
    }
};