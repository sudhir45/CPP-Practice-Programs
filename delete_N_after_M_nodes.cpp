#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

node* addNode(int num){
	node* new_node = new node();
	new_node->data = num;
	new_node->next = NULL;
	return new_node;
}

void printList(node* head){
	node* traveller = head;
	while(traveller != NULL){
		cout << traveller->data <<" -> ";
		traveller = traveller->next;
	}
	cout <<"NULL "<<endl;
}

void deleteNafterM(node* head, int N, int M){
	node* curr = head;
	node* t;
	int count;
	
	while(curr != NULL){
		for(count=1; count<M && curr!=NULL; count++){
			curr = curr->next;
		}
		
		if(curr == NULL)
			return;
		
		t= curr->next;
		for(count=1; count<=N && t!=NULL; count++){
			node* temp;
			temp = t;
			t = t->next;
			free(temp);
		}
		curr->next = t;
		curr = t;
	}
}
	
int main(){
	node* head = addNode(1);
	head->next = addNode(2);
	head->next->next = addNode(3);
	head->next->next->next = addNode(4);
	head->next->next->next->next = addNode(5);
	head->next->next->next->next->next = addNode(6);
	deleteNafterM(head,2,3);
	printList(head);
	return 0;
}

