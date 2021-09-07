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

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout<<traveller->data<<" -> ";
		traveller = traveller->next;
	}
	cout<<"NULL "<<endl;
}

void removeDuplicates(node* head){
	node* temp=head;
	
	while(/*temp!=NULL && */temp->next!=NULL){
		
		if(temp->data==temp->next->data){
			
			node *temp1=temp->next;
			temp->next=temp1->next;
			delete(temp1);
		}
		
		else{
			
			temp=temp->next;
		}
	}
}

int main(){
	node* head = NULL;
	head = append(head,1);
	head = append(head,2);
	head = append(head,3);
	head = append(head,4);
	head = append(head,4);
	head = append(head,6);
	head = append(head,7);
	head = append(head,8);
	removeDuplicates(head);
	printList(head);
	return 0;
}
