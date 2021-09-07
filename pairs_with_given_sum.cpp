#include <bits/stdc++.h> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node* next;
	node* prev; 
}; 

node* append(node** head, int num){
	node* curr = *head;
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	
	if(*head == NULL){
		temp->prev = NULL;
		*head = temp;
		return *head;
	}
	
	while(curr->next != NULL)
		curr = curr->next;
	
	curr->next = temp;
	temp->prev = curr;
	return *head;
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

void pairsum(node* head, int x){
	node* first = head;
	node* second = head;
	bool found = false;
	while(second->next != NULL)
		second = second->next;
		
	while(first!=NULL && second!=NULL && first!=second && second->next!=first){
		if((first->data + second->data) == x){
			found = true;
			cout<<"("<<first->data<<","<<second->data<<")"<<endl;
			first = first->next;
			second = second->prev;
		}
		else{
			if((first->data + second->data) < x)
				first = first->next;
			else
				second = second->prev;
		}
	}	
	if(found = false)
		cout<<"pairs not found";
}

int main() 
{ 
	node* head = NULL;
	append(&head, 0);
	append(&head, 1); 
	append(&head, 3);  
	append(&head, 5); 
	append(&head, 7); 
	append(&head, 8);
	pairsum(head,8); 
	//printList(head); 
	cout<<endl;
}
