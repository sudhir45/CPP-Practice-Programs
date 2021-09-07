#include <bits/stdc++.h> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node *next;
	//node(int x) : data(x), next(NULL){}
};

void append(node** head, int num) 
{ 
	node* temp = new node; 
	temp->data = num; 
	temp->next = NULL; 

	if (*head == NULL) { 
		*head = temp; 
		return; 
	} 
	node* travel = *head;
	while(travel->next != NULL){
		travel = travel->next;
	}
	travel->next = temp;
} 

void printList(node *node) 
{ 
	while (node != NULL) 
	{ 
		cout<<" "<<node->data; 
		node = node->next; 
	} 
} 

node* mergelist(node* m, node* n){
	node* head = new node();
	head->data = -1;
	head->next = NULL;
	node* last = head;
	return last;
}

int main() 
{ 
	node* head1 = NULL;
	node* head2 = NULL; 
	node* sorting = NULL;
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
	sorting = mergelist(head1, head2);
	printList(sorting);
	return 0; 	
}
