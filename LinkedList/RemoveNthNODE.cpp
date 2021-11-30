  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    int length(ListNode* head) {
        ListNode* current = head;
        int size = 0;
        while(current != nullptr) {
            current = current->next;
            size++;
        }
        return size;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        
        int size = length(head);
        
        int temp = size - n;        
        
        int count = 0;
        
        if(temp == 0) {
            head = head->next;
        }
        
        while(temp != count) {
            count++; 
            if(count == temp) {                             //current will stop before the Nth node here
                current->next = current->next->next;        //This will skip the Nth node
            } else {
                current = current->next;                    
            }
        }
        return head;
    }
};