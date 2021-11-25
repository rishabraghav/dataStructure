
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* current1 = head;
        ListNode* current2 = head;
        
        while(current2 != nullptr && current2->next != nullptr) {
            current1 = current1->next;
            current2 = current2->next->next;
        }
        return current1;
    }
};