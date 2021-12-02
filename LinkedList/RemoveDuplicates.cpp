//member access within null pointer of type 'ListNode' (INCOMPLETE)

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = new ListNode(0);
        prev->next = current;
        bool same = false;
        
        while(current->next != nullptr) {
            if(head->val == head->next->val) {
                if(current->val == current->next->val) current = current->next;
                else head = current->next;        
            }
            if(current->val == current->next->val) same = true;
            else {
                if(same) {
                    prev->next = current->next;
                    same = false;
                } else prev = prev->next;
            }    
            current = current->next;
        }
        return head;
    }
};