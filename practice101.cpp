#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};

void printList(node* head_node){
	node* curr; 
	curr = head_node;
	
	while(curr != NULL){
		cout << curr->data << " -> ";
		curr = curr->next;
	}
}
/*
node* append(node* head, int num){
	node* temp = new node(); 
	node* tail = head;
	
	temp->data = num;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		tail = temp;
	}
	else{
		while(tail != NULL){
			if(tail->next == NULL){
				tail->next = temp;
				tail = tail->next;
			}
			tail = tail->next;
		}
	}	
	return head;
}
*/

node* append(node* head, int info)  
{  
    // Allocating node  
    node* node1 = new node(); 
      
    // Info into node  
    node1->data = info;  
      
    // Next of new node to head  
    node1->next = (head);  
  
    // head points to new node  
    (head) = node1;  
  	return (head);
}

node* mergeList(node* head1, node* head2){
	node* curr = head1;
	
	while(curr != NULL){
		if(curr->next == NULL && head2 != NULL){
			curr->next = head2;
			break;
		}
		curr = curr->next;
	}
	return head1;
}

void sortList(node* head){
	node* curr = head;
	node* temp = head;
	
	while(curr->next != NULL){
		temp = curr->next;
		while(temp != NULL){
			if(temp->data < curr->data){
				swap(temp->data, curr->data); 	
			}
			temp = temp->next;
		}
		curr = curr->next;
	}
}

int main(){
	node* head1 = new node();
	node* head2 = new node();
	head1 = NULL;
	head2 = NULL;
	head1 = append(head1,10);
	head1 = append(head1,9);
	head1 = append(head1,8);
	head1 = append(head1,7);
	head1 = append(head1,6);
	head2 = append(head2,1);
	head2 = append(head2,5);
	head2 = append(head2,3);
	head2 = append(head2,2);
	head2 = append(head2,4);
	
	head1 = mergeList(head1, head2);
	sortList(head1);
	printList(head1);
	return 0;
}
