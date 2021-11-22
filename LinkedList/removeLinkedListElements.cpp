  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = new ListNode(0);
        ListNode* temp = new ListNode();
        temp = head;
        current->next = head;
        while(current->next != nullptr) {
            if(val == head->val) {
                    head = head->next;
                    current->next = head;
                }
            else if(val == temp->val && temp->next != nullptr) {
                temp = temp->next;
            } else if(temp->next == nullptr) {
                if(val != temp->val) {
                    current->next = temp;
                    current = current->next;
                } else {
                    current->next = nullptr;
                }
            } else {
                current->next = temp;
                temp = temp->next;
                current = current->next;
            }
        }
        
        return head;
    }
};