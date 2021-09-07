#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* addnode(node* head, int num){
	
	node* temp = new node();
	node* traveller = head;
	temp->data = num;
	temp->next = NULL;
	
	if(head==NULL){
		head = temp;
		return head;
	}
	while( traveller->next != NULL ){
		traveller = traveller->next;
	}
	traveller->next = temp;
	
	return head;
}

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout << traveller->data <<" -> ";
		traveller = traveller->next;
	}
	cout<<"NULL "<<endl;
}

void removeloop(node* head){
	
	if(head == NULL || head->next == NULL){
		cout<< " Linked List is empty!!" <<endl;
	}
	
	node* slow = head;
	node* fast = head;
	
	slow = slow->next;
	fast = fast->next->next;
	
	while(fast && fast->next){
		if(slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if(slow == fast){
		//cout<<" Loop is found !!"<< endl;
		slow = head;
		while(slow->next != fast->next){
			slow = slow->next;
			fast = fast->next;
		}
		fast->next = NULL;
	}
}

int main(){
	node* head = NULL;
	head = addnode(head,1);
	head = addnode(head,2);
	head = addnode(head,3);
	head = addnode(head,4);
	head = addnode(head,5);
	head = addnode(head,6);
	head = addnode(head,7);
	
	head->next->next->next = head->next->next;
	
	removeloop(head);
	printList(head);
	return 0;	
}
