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

bool isCircular(node* head){
	if(head  == nullptr)
		return true;
	node* slow = head;
	node* fast = head;
	
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			slow = head;
			while(slow != fast){
				slow = slow->next;
				fast = fast->next;
			}
			if(slow == head)
				return true;
			return 0;
		}
	}
	return false;
}

int main(){
	node* head = nullptr;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	push(&head, 6);
	push(&head, 7);
	push(&head, 8);
	printList(head);
	isCircular(head)? cout<<endl<<" Yes circular" : cout<<"Not circular";
	
	return 0;
}
