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
    int length(ListNode* head) {
        int size = 0;
        ListNode* current = head;
        while(current != nullptr) {
            current = current->next;
            size++;
        }
        return size;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next == nullptr || head == nullptr) {
            return head;
        }
        int size  = length(head);
        ListNode* prev = new ListNode(0);
        ListNode* current = new ListNode(0);
        prev->next = head;
        current->next = head;
        ListNode* node = prev;
        
        for(int i = 0; i < k - 1; i++) prev = prev->next;
        for(int i = 0; i < size - k; i++) current = current->next;
        
        ListNode* left = prev->next;
        ListNode* right = current->next;
        
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
                
        return node->next;
        
    }
};