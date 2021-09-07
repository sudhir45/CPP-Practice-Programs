#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* addNode(int num){
	node* new_node = new node();
	new_node->data = num;
	new_node->next = NULL;
	return new_node;
}

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout << traveller->data <<" -> ";
		traveller = traveller->next;
	}
	cout <<"NULL "<<endl;
}

node* addOne(node* head){
	node* curr = head;
	node* last = NULL;
	
	while(curr->next != NULL){
		if(curr->data != 9)
			last = curr;
		curr = curr->next;
	}
	
	if(curr->data != 9){
		curr->data++;
		return head;
	}
	
	if(last == NULL){
		last = new node();
		last->data = 0;
		last->next = head;
		head = last;
	}
	
	last->data++;
	last = last->next;
	
	while(last != NULL){
		last->data = 0;
		last = last->next;
	}
	return head;
}

int main(){
	node* head = addNode(9);
	head->next = addNode(9);
	head->next->next = addNode(1);
	head->next->next->next = addNode(9);
	head = addOne(head);
	printList(head);
	return 0;
}
