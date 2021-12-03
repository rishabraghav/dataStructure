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
        if(left == 1 && right == 1) {
            return head;
        }
        ListNode* current = new ListNode(0);
        current->next = head;
        int count = 1;
        ListNode* prev = new ListNode(0);
        ListNode* node = new ListNode(0);
        ListNode* node2 = new ListNode(0);
        
        
        while(count - 1 < right) {
            current = current->next;
            count++;
            
            if(count == left) {
                prev = nullptr;
                node = current->next;
                node2 = current->next;
                while(count - 1 < right) {
                    ListNode* temp = node;
                    node = node->next;
                    temp->next = prev;
                    prev = temp;
                    count++;
                }
            }
        }
        current->next = prev;
        node2->next = node;
        return head;
    }
};