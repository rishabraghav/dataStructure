//  class ListNode {
//     int val;
//     ListNode* next;
//     public:
//     ListNode(int val){
//         this -> val = val;
//         this -> next = NULL;
//     }
// }

class MinStack {
    ListNode* head = NULL;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(head == NULL) {
            ListNode* node = new ListNode(val);
            head = node;
        } else {
            ListNode* node = new ListNode(val);
            // node -> val = val;
            node -> next = head;
            head= node;
        }
    }
    
    void pop() {
        if(head == NULL) {
            return;
        }else {
            head = head -> next;
        }
    }
    
    int top() {
        return head -> val;
    }
    
    int getMin() {
        int min = INT_MAX;
        ListNode* current = head;
        while(current != NULL) {
            if(current -> val < min) {
                min = current -> val;
            }
            current = current -> next;
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
