 
#include <bits/stdc++.h> 
using namespace std; 

class Node 
{ 
	public: 
	int data; 
	Node *next; 
}; 
void push(Node** head_ref, int new_data) 
{ 
	Node* new_node = new Node(); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 
void insertAfter(Node* prev_node, int new_data) 
{ 
	if (prev_node == NULL) 
	{ 
		cout<<"the given previous node cannot be NULL"; 
		return; 
	} 
	Node* new_node = new Node(); 
	new_node->data = new_data; 
	new_node->next = prev_node->next; 
	prev_node->next = new_node; 
} 

void append(Node** head_ref, int new_data) 
{ 
	Node* new_node = new Node(); 
	Node *last = *head_ref; 
	new_node->data = new_data; 
	new_node->next = NULL; 
	if (*head_ref == NULL) 
	{ 
		*head_ref = new_node; 
		return; 
	} 
	while (last->next != NULL) 
		last = last->next; 
	last->next = new_node; 
	return; 
} 

void printList(Node *node) 
{ 
	while (node != NULL) 
	{ 
		cout<<" "<<node->data; 
		node = node->next; 
	} 
} 

Node* merge(Node* p, Node* q, Node* sorting){
	
}



int main() 
{ 
	Node* head1 = NULL;
	Node* head2 = NULL; 
	Node* sorting = NULL;
	append(&head1, 10); 
	append(&head1, 30);  
	append(&head1, 50); 
	append(&head1, 70); 
	append(&head1, 90); 
	cout<<"Created Linked list 1 is: "; 
	printList(head1); 
	cout<<endl;
	
	append(&head2, 20); 
	append(&head2, 40);  
	append(&head2, 60); 
	append(&head2, 80); 
	append(&head2, 100); 
	cout<<"Created Linked list 2 is: "; 
	printList(head2); 
	cout<<endl;
	
	cout<<"Merged sorted Linked List is :";
	merge(head1, head2, sorting);
	printList(sorting);
	return 0; 
} 

