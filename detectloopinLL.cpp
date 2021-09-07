#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* append(node* head, int num){
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	temp->next  = head;
	head = temp;
	return head;
}

void pritnList(node* head){
	node* traveller = head;
	while(head != NULL){
		cout<<traveller->data<<" -> ";
		traveller = traveller->next;
	}
}

int detectloop(node* head){
	node* slow_p = head;
	node* fast_p = head;
	
	while(slow_p && fast_p->next){
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if(slow_p == fast_p){
			return 1;
		}
	}
	return 0;
}

int main(){
	node* head = NULL;
	head = append(head,1);
	head = append(head,2);
	head = append(head,3);
	head = append(head,4);
	head = append(head,5);
	head->next->next->next->next = head;
	if(detectloop(head)){
		cout<<" Loop Found!!! ";
	}
	else{
		cout << "Loop not found!!! ";
	}
	pritnList(head);
	return 0;
}
