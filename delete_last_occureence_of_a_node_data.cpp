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

void deletelastocc(node* head, int x){

	struct node* tmp1 = NULL;
	node* curr = head;
	node* prev;
        while(curr) { 
                if(curr->data == x) { 
                        tmp1 = curr;
						break; 
                } 
            prev = curr;
            curr = curr->next;   
        } 
        if(tmp1) { 
            node* temp = curr;
            curr = curr->next;
			prev->next = temp->next;
			free(temp);     
        } 
}
	
int main(){
	node* head = addNode(1);
	head->next = addNode(2);
	head->next->next = addNode(3);
	head->next->next->next = addNode(4);
	head->next->next->next->next = addNode(5);
	head->next->next->next->next->next = addNode(6);
	deletelastocc(head,6);
	printList(head);
	return 0;
}

