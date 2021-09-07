#include <bits/stdc++.h> 
using namespace std; 

class Node 
{ 
	public: 
	int data; 
	Node *next; 
}; 
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
		cout<<node->data<<"->"; 
		node = node->next; 
	} 
	cout<<"NULL ";
} 

Node* merge(Node* p, Node* q){
	Node* head3;
	Node* sorting = NULL;
	if(p == NULL){
		return q;
	}
	if(q == NULL){
		return p; 
	}
	
	if(p && q){
		if(p->data <= q->data){
			sorting = p;
			p = sorting->next;
		}
		else{
			sorting = q;
			q = sorting->next;
		}
	}
	head3 = sorting;
	
	while(p && q){
		if(p->data < q->data){
			sorting->next = p;
			sorting = p;
			p = sorting->next;
		}
		else{
			sorting->next = q;
			sorting = q;
			q = sorting->next;
		}
		
		if(p == NULL){
			sorting->next = q;
		}
		if(q == NULL){
			sorting->next = p;
		}
	}
	return head3;
}

int main() 
{ 
	Node* head1 = NULL;
	Node* head2 = NULL; 
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
	Node* sorting = merge(head1, head2);
	printList(sorting);
	return 0; 
}
