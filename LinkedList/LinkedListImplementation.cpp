class Node {
    public:
        int val;
        Node *next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    int size = 0;
    Node *head, *tail;
    MyLinkedList() {
        size = 0;
        head = nullptr;
        tail = nullptr;
        
    }
    
    int get(int index) {
       
        if(index == 0) {     //if index is 0
            return head->val;
        } else if (index == size - 1) {  //if index is equal to size - 1
            return tail->val;
        } else if (index < 0 || index > size) { //if index is not in range of 0 to size
            return -1;
        } else {
            
            Node* current = head;
            
            while(index - 1 > 0) {
                current = current->next;
                index--;
            }
            return current->next->val;
        }
        
        
        //if index is not in range
    }
    
    void addAtHead(int val) {
        Node *node = new Node(val);
        // node = val;
        
                                //if list is empty
        if(size == 0){
            head = node;
            tail = node;
        } else {                //if list is not empty
            node->next = head;
            head = node;
        }
        size++;
        
    }
    
    void addAtTail(int val) {
        Node *node = new Node(val);
        // node->val = val;
        
        if(size == 0){      //if list is empty
            head = node;
            tail = node;
        } else {            //if list is not empty
            tail->next = node;
            tail = node;
        }
        size++;
        
    }
    
    void addAtIndex(int index, int val) {
        
            if(index == 0) {                    //if list is empty & index is 0
                addAtHead(val);                 //if list is empty & index is not 0
            } else if(index > size || index < 0) {           //if index is greater than size
                 return;
            } else if(index  == size) {     //if index is size - 1
                addAtTail(val);
            } else {                            //if index is in range 0 - size
                Node *node = new Node(val);
                Node *current = head;
                
                while(index - 1 > 0) {
                    current = current->next;
                    index--;
                }
                 node->next = current->next;
                current->next = node;
                size++;
            }                

           
            
            
    }
    void removeAtTail() {
        // Node *node = new Node(val);
                Node *current = head;
                
                while(current->next != nullptr) {
                    current = current->next;
        
                }
                current->next = nullptr;
                tail = current;
                size--;
    }
    
    
    void deleteAtIndex(int index) {
        if(index == 0) {                    //if index is 0
                head = head->next;                 
            } else if(index > size || index < 0) {           //if index is greater than size
                return;
            } else if(index  == size - 1) {     //if index is size - 1
                removeAtTail();
            } else {                            //if index is in range 0 - size
                // Node *node = new Node();
                Node *current = head;
                index--;
                while(index--) {
                    current = current->next;
                    index--;
                }
                current->next = current->next->next;
                size--;
            } 
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */