class HashNode {
    public:
    int key;
    int value;
    HashNode *next;
    
    HashNode(int key, int value) {
        this -> key = key;
        this -> value = value;
        next = NULL;
    }
};

class MyHashMap {
    int size;
    int numBuckets;
    HashNode** buckets;
public:
    MyHashMap() {
        this-> size = 0;
        numBuckets = 5;
        buckets = new HashNode*[numBuckets];
        for(int i = 0; i < numBuckets; i++) {
            buckets[i] = NULL;
        }
    }
private:
    int getIndex(int numBuckets, int key) {
        int coefficient = 37;
        int index = key * coefficient;
        return (index % numBuckets);
    }
public:    
    void put(int key, int value) {
        int index = getIndex(numBuckets, key);
        // cout<<index;
        HashNode* head = buckets[index];
        while(head != NULL) {
            if(head -> key == key) {
                head -> value = value;
                return;
            }
            head = head -> next; 
        }
        head = buckets[index];
        HashNode* node = new HashNode(key, value);
        node -> next = head;
        buckets[index] = node;
        }
         
    
    int get(int key) {
        int index = getIndex(numBuckets, key);
        // cout<<index;
        HashNode* head = buckets[index];
        while(head != NULL) {
            if(head -> key == key) {
                return head -> value;
            }
            head = head -> next;   
        }
        return -1;
    }
    
    void remove(int key) {
        int index = getIndex(numBuckets, key);
        HashNode* head = buckets[index];
        HashNode* node = NULL;
        while(head != NULL) {
            if(head -> key == key) {
                if(node == NULL) {
                    buckets[index] = head -> next;
                } else {
                    node -> next = head -> next;
                }
            }
            node = head;
            head = head -> next;   
        }    
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */