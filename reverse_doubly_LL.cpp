#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
	node* prev;
};

void append(node** head, int num){
	node* curr = *head;
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	
	if(head == NULL){
		temp->prev = NULL;
		*head = temp;
		return;
	}
	while(curr->next != NULL)
		curr = curr->next;
	
	curr->next = temp;
	temp->prev = curr;
	return;
}

void printList(node* head){
	node* curr = head;
	while( curr != NULL){
		cout<<curr->data<<" -> ";
		curr = curr->next;
	}
	cout<<"NULL";
}

node* reverse(node* head){
	node* traveller = head;
	node* temp = NULL;
	
	while(traveller != NULL){
		temp = traveller->next;
		traveller->prev = traveller->next;
		traveller->next = temp;
		traveller = traveller->prev;
	}
	
	if(temp != NULL){
		head = temp->prev;
	}
	return head;
}

int main(){
	node* head = NULL;
	append(&head,1);
	append(&head,2);
	append(&head,3);
	append(&head,4);
	append(&head,5);
	printList(head); 
	head = reverse(head);
	printList(head);
	return 0;
}
