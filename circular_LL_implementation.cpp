#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void push(node** head, int data){
	
	node* temp = new node();
	temp->data = data;
	temp->next = *head;
	
	node* travel = *head;
	if(*head != nullptr){
		while(travel->next != *head){
			travel = travel->next;
		}
		travel->next = temp;
	}
	else{
		temp->next = temp;
	}
	*head = temp;
}

void printList(node* head){
	node* travel = head;
	if(head == nullptr)
		return;
	do{
		cout << travel->data <<"-> ";
		travel = travel->next;
	}
	while(travel != head);	
}

int main(){
	node* head = NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	printList(head);
	return 0;
}












