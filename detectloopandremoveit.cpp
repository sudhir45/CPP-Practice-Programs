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
	while(traveller->next != NULL){
		cout<<traveller->data<<" -> ";
		traveller = traveller->next;
	}
}

void detectloop(node* head){
	node* slow = head;
	node* fast = head;
	
	slow = slow->next; 
    fast = fast->next->next; 
  
    while (fast && fast->next) { 
        if(slow == fast)
			break; 
        slow = slow->next; 
        fast = fast->next->next; 
    } 
    if (slow == fast) { 
    	cout<<" Loop found !!"<<endl;
        slow = head; 
        while (slow->next != fast->next) { 
            slow = slow->next; 
            fast = fast->next; 
        } 
        fast->next = NULL; 
		printList(head);
    } 
    else{
    	cout<<" Loop not found";
	}
}

int main(){
	node* head = NULL;
	head = append(head,1);
	head = append(head,2);
	head = append(head,3);
	head = append(head,4);
	head = append(head,5);
	head = append(head,6);
	head = append(head,7);
	head = append(head,8);
	head->next->next->next->next->next = head->next->next;
	
	detectloop(head);
	printList(head);
	
	return 0;
}
