#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout << traveller->data <<" -> ";
		traveller = traveller->next;
	}
	cout <<"NULL "<<endl;
}

node* append(node* head, int num){
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	
	if(head == NULL){
		head = temp;
		return head;
	}
	
	node* traveller = head;
	while(traveller->next != NULL){
		traveller = traveller->next;
	}
	traveller->next = temp;
	return head;
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

