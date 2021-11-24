  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head == nullptr) {
            return false;
        }
        
        ListNode* first = new ListNode(0);
        ListNode* second = new ListNode(0);
        first = head;
        second = head->next;
        while(first != nullptr && second != nullptr) {
            if(first == second) return true; 
            first = first->next;
            if(second->next == nullptr) {
                break;
            }
            second = second->next->next;
        }
        return false;
    }
};