#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};


Node* mergeTwoSortedList(Node* head1, Node* head2) {
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    Node* current1 = head1;
    Node* current2 = head2;
    Node* newHead = NULL;
    Node* newTail = NULL;

    if(current1 -> data <= current2 -> data) {
        newHead = current1;
        newTail = current1;
        current1 = current1 -> next;
    }

    while(current1 != NULL && current2 != NULL){
        if(current1 -> data <= current2 -> data) {
            newTail -> next = current1;
            newTail = current1;
            current1 = current1 -> next;
        } else {
            newTail -> next = current2;
            newTail = current2;
            current2 = current2 -> next;
        }
    }
    if(current1 == NULL) {
        newTail -> next = current2;
    }
    if(current2 == NULL) {
        newTail -> next = current1;
    }
    return newHead;
}

void printList(Node *head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data << " -> " ;
        temp = temp -> next;
    }
    cout<< "NULL";
    cout<< endl;
}



Node *takeinput() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin >> data;


    while(data != -1) {
        Node* node = new Node(data);
        if(head == NULL) {
            head = node;
            tail = node;
        } else {
            tail -> next = node;
            tail = node;
        }
        cin >> data;
    }

    return head;

}

int main(){
    Node* head = takeinput();
    Node* head2 = takeinput();
    Node* head3 = mergeTwoSortedList(head, head2);
    printList(head3);
    return 0;
}