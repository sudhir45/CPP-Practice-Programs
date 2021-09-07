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

void splitList(node* head, node** head1, node** head2){
	
	node* slow = head;
	node* fast = head;
	
	if(head == nullptr)
		return;
	
	while(fast->next != head && fast->next->next != head){
		slow = slow->next;
		fast = fast->next->next;
	}
	
	if(fast->next->next == head)
		fast = fast->next;
		
	*head1 = head;
	
	if(head->next != head)
		*head2 = slow->next;
	
	fast->next = slow->next;
	
	slow->next = head;
}

int main(){
	node* head = NULL;
	node* head1 = NULL;
	node* head2 = NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	cout<< " Original list is : ";
	printList(head);
	splitList(head, &head1, &head2);
	cout <<endl<<" First half is : ";
	printList(head1);
	cout <<endl<<" Second half is : ";
	printList(head2);
	return 0;
}
