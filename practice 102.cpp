#include <iostream> 
using namespace std; 

class node 
{ 
  public: 
	int data; 
	node *next; 
}; 

void append(node** head_ref, int new_data) 
{ 
	node* new_node = new node(); 
	node *last = *head_ref; 
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

void printList(node *node) 
{ 
	while (node != NULL) 
	{ 
		cout<<node->data<<"->"; 
		node = node->next; 
	} 
	cout<<"NULL ";
} 

node* merge(node* p, node* q){
	if(p == NULL){
		return q;
	}
	if(q == NULL){
		return p; 
	}
	
	node* travel;
	node* head = new node();
	head->data = -1;
	head->next = NULL;
	travel = head;
	
	while(p && q){
		if(p->data < q->data){
			travel->next = p;
			travel = p;
			p = travel->next;
		}
		else{
			travel->next = q;
			travel = q;
			q = travel->next;
		}
		
		if(p == NULL){
			travel->next = q;
		}
		if(q == NULL){
			travel->next = p;
		}
	}
	return head->next;
}

int main() 
{ 
	node* head1 = NULL;
	node* head2 = NULL; 
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
	node* sorting = merge(head1, head2);
	printList(sorting);
	return 0; 
}
