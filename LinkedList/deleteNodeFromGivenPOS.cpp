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

using namespace std;int length(Node* head) {
    Node* temp = head;
    int count = 0;
    
    while(temp != NULL) {
        temp = temp -> next;
        count++;
    }
    return count;
}

Node *deleteNode(Node *head, int pos)
{	  
    int size = length(head);
    if(head == NULL || pos >= size){
        return head;
    } //if list is empty 
    
    if(pos == 0) {
        head = head -> next;
        return head;
    } //if position is zero
    Node* temp = new Node(0);
    temp -> next = head;
    int count = 0;

    while(temp != NULL) {
        if(pos == count) {
            temp -> next = temp -> next -> next;
        }
        count++;
        temp = temp -> next;
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
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}