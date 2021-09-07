#include <iostream>
using namespace std;

class node{
	public:
		int data;
		int prio;
		node* next;
};

node* new_node(int d, int p){
	node* temp = new node();
	temp->data = d;
	temp->prio = p;
	temp->next = NULL;
	return temp;
}

void pop(node** head){
	node* temp = *head;
	*head = (*head)->next;
	free(temp);
}

void push(node** head, int d, int p){
	node* travel = *head;
	node* temp = new_node(d,p);
	
	if((*head)->prio > p){
		temp->next = *head;
		*head = temp;
	}
	else{
		while(travel->next!=NULL && travel->next->prio <p)
			travel = travel->next;
		
		temp->next = travel->next;
		travel->next = temp;
	}
}

void print(node* head){
	node* travel = head;
	cout<<"<- ";
	while(travel != NULL){
		cout<<"{"<<travel->data<<","<<travel->prio<<"} ";
		travel = travel->next;
	}
	cout<<"->";
}

int main(){
	node* pq = new_node(4,1);
	push(&pq, 5, 2); 
    push(&pq, 6, 3); 
    push(&pq, 7, 0);
    print(pq);
    return 0;
}

