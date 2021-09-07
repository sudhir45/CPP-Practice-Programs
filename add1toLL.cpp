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

node* reverse(node* head){
	node* curr = head;
	node* prev = NULL;
	node* next;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

node* addOne(node* head){
	
	if(head == NULL)
		return NULL;
		
	node* res = head;
	node* temp;
	int carry = 1,sum;
	
	while(head != NULL){
		sum = carry + head->data;
		carry = (sum>=10)? 1 : 0;
		sum = sum % 10;
		head->data = sum;
		temp = head;
		head = head->next;
	}
	if(carry>0)
		temp->next = addNode(carry);
	return res;
}

int main(){
	node* head = addNode(1);
	head->next = addNode(9);
	head->next->next = addNode(9);
	head->next->next->next = addNode(9);
	head = reverse(head);
	head = addOne(head);
	head = reverse(head);
	printList(head);
	return 0;
}

