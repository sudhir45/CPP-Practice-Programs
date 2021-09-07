#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
	node* prev;
};

node* append(node* head, int num){
	node* curr = head;
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	
	if(head == NULL){
		temp->prev = NULL;
		head = temp;
		return head;
	}
	
	while(curr->next != NULL)
		curr = curr->next;
	
	curr->next = temp;
	temp->prev = curr;
	return head;
}

void printList(node* head){
	node* last;
	node* curr = head;
	cout<<" In forward direction ";
	while( curr != NULL){
		cout<<curr->data<<" -> ";
		last = curr;
		curr = curr->next;
	}
	cout<<" In reverse direction ";
	while( last != NULL){
		cout<<last->data<<" -> ";
		last = last->prev;
	}
}

int main(){
	node* head = NULL;
	head = append(head,1);
	append(head,2);
	append(head,3);
	append(head,4);
	append(head,5);
	
	printList(head);
	return 0;
}
