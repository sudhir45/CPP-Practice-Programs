#include <iostream>
using namespace std;

class node{
  public:
	int data;
	node* next;
};


node* sortedmerge(node* a, node* b){
	node* result = NULL;
	if(a == NULL)
		return b;
	else if(b == NULL)
		return a;
	
	if(a->data <= b->data){
		result = a;
		result->next = sortedmerge(a->next, b);
	}
	else{
		result = b;
		result->next = sortedmerge(a, b->next);
	}
	return result;
}

void frontbacksplit(node* source, node** front, node** back){
	node* slow;
	node* fast;
	slow = source;
	fast = source->next;
	
	while(fast != NULL){
		fast = fast->next;
		if(fast != NULL){
			slow = slow->next;
			fast = fast->next;
		}
	}
	
	*front = source;
	*back = slow->next;
	slow->next  =NULL;
}

void mergesort(node** head_ref){
	node* head = *head_ref;
	node* a;
	node* b;
	if((head==NULL) || (head->next==NULL)){
		return;
	}
	
	frontbacksplit(head, &a, &b);
	mergesort(&a);
	mergesort(&b);
	
	*head_ref = sortedmerge(a,b);
}

node* append(node* head, int num){
	node* new_node = new node(); 
    new_node->data = num; 
    new_node->next = (head); 
    (head) = new_node; 
    return head;
}

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout<<traveller->data<<" -> ";
		traveller = traveller->next;
	}
}

int main(){
	node* head = NULL;
	head = append(head,1);
	head = append(head,9);
	head = append(head,5);
	head = append(head,3);
	head = append(head,2);
	mergesort(&head);
	printList(head);
	return 0;
}




