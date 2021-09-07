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
	*head = temp->next;
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

void sortedInsert(node** head, int data){
	
	node* temp = new node;
	temp->data = data;
	node* travel = *head;
	//1) Linked List is empty:
	if(travel == nullptr) {
		temp->next = temp;
		*head = temp;	
	}
	
	//2) New node is to be inserted just before the head node: i.e last node to be inserted 
	else if(travel->data >= temp->data){
		while(travel->next != *head)
			travel = travel->next;
		travel->next = temp;
		temp->next = *head;
		*head = temp;
	}
	
	//3) New node is to be  inserted somewhere after the head:  
	else{
		while(travel->next != *head && travel->next->data < data)
			travel = travel->next;
		temp->next = travel->next;
		travel->next = temp;
	}
}

int main(){
	node* head = nullptr;
	push(&head, 1);
	push(&head, 2);
	push(&head, 4);
	push(&head, 7);
	push(&head, 9);
	cout<<" Before insertion of element: ";
	printList(head);
	
	sortedInsert(&head , 3);
	sortedInsert(&head , 5);
	cout<<endl<<" After insertion of elements : ";
	printList(head);
	return 0;
}
