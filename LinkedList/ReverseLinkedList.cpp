  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = new ListNode(0);
        current = head;
        ListNode* temp = new ListNode(0);
        
        temp = nullptr;
        
        while(current != nullptr) {
            ListNode* node = new ListNode(current->val);
            node->next = temp;
            temp = node;
            current = current->next;
        }
        
        return temp;
        
    }
};