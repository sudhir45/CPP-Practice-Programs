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

node* reverse(node* head,int num){
	if(head == NULL)
		cout << "Linked List have zero elements " <<endl;

	node* prev = NULL;
	node* curr = head;
	node* next;
	int counter = num;
	while(curr != NULL && counter--){
	
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	if(head != NULL)
		head->next = reverse(next,num);
	return prev;
}


int main(){
	node* head = NULL; 
	head = addNode(1);
	head->next = addNode(9);
	head->next->next = addNode(2);
	head->next->next->next = addNode(6);
	head->next->next->next->next = addNode(3);
	head->next->next->next->next->next = addNode(4);
	head = reverse(head,3);
	printList(head);
	return 0;
}
