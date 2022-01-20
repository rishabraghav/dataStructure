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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL) {
        return head2;
    } else if (head2 == NULL) {
        return head1;
    }
    
    Node* t1 = head1;
    Node* t2 = head2;
    Node* head = new Node(0);
    Node* tail = new Node(0);
    if(t1 -> data <= t2 -> data) {
        head = head1;
     	tail = head1;
        t1 = t1 -> next;
    } else {
        head = head2;
        tail = head2;
        t2 = t2 -> next;
    }
    
    while(t1 != NULL && t2 != NULL) {
        if(t1 -> data <= t2 -> data) {
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

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}