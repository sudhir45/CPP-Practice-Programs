#include <iostream>
using namespace std;

class node{
   public:
	int data;
	node* next;
	node* prev;
};

void append(node** head, int num){
	node* temp = new node();
	temp->data = num;
	temp->next = NULL;
	if(*head == NULL){
		temp->prev = NULL;
		*head = temp;
		return;
	}
	node* travel = *head;
	while(travel->next != NULL){
		travel = travel->next;
	}
	travel->next = temp;
	temp->prev = travel;
}
 
void printList(node* head){
	node* travel = head;
	while(travel != NULL){
		cout << travel->data << " -> ";
		travel = travel->next;
	}
	cout << "NULL " << endl;
}

void split(node* head){
	node* slow = head;
	node* fast = head;
	
	while(fast->next && fast->next->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	
}

int main(){
	node* head = NULL;
	append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	append(&head, 4);
	append(&head, 5);
	append(&head, 6);
	
	printList(head);
	return 0;
}
