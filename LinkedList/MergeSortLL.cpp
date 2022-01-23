#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;

Node *middle(Node* head) {
    Node* fast = head -> next;
    Node* slow = head;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    
    return slow;
}

Node *merging(Node* head1, Node* head2) {
	if(head1 == NULL) {
        return head2;
    } else if(head2 == NULL) {
        return head1;
    }
    
    Node* t1 = head1;
    Node* t2 = head2;
    Node* head = NULL;
    Node* tail = NULL;
    if(t1 -> data < t2 -> data) {
        head = t1;
        tail = t1;
        t1 = t1 -> next;
    } else {
        head = t2;
        tail = t2;
        t2 = t2 -> next;
    }
    
    while(t1 != NULL && t2 != NULL) {
        if(t1 -> data < t2 -> data){
            tail -> next = t1;
        	tail = t1;
        	t1 = t1 -> next;
        } else {
            tail -> next = t2;
            tail = t2;
            t2 = t2 -> next;
        }
    }
    if(t2 == NULL) {
        tail -> next = t1;
    }
    if(t1 == NULL) {
        tail -> next = t2;
    }
    return head;
}

Node *mergeSort(Node *head)
{
    if(head == NULL || head -> next == NULL) {
        return head;
    }
	Node* mid = middle(head);
    Node* midNext = mid -> next;
    mid -> next = NULL;
    
    Node *firstHead = mergeSort(head);
    Node *secondHead = mergeSort(midNext);
    
    Node* finalHead = merging(firstHead, secondHead);
    return finalHead;
    
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}