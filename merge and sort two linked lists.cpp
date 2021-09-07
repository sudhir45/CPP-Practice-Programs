#include <bits/stdc++.h> 
using namespace std; 

struct node { 
	int data; 
	node* next; 
}; 

// Function to print the linked list 
void printList(node* head) 
{ 
	node* tmp; 
	tmp = head; 

	while (tmp != NULL) { 
		cout << tmp->data << " -> "; 
		tmp = tmp->next; 
	} 
} 

node* append(node* head, int num) 
{ 
	node* temp = new node; 
	node* tail = head; 
	temp->data = num; 
	temp->next = NULL; 

	if (head == NULL) { 
		head = temp; 
		tail = temp; 
	} 
	else { 
		while (tail != NULL) { 
			if (tail->next == NULL) { 
				tail->next = temp; 
				tail = tail->next; 
			} 
			tail = tail->next; 
		} 
	} 
	return head; 
} 

// Function to concatenate the two lists 
node* mergelists(node* head1, node* head2) 
{ 

	node* tail = head1; 

	while (tail != NULL) { 

		if (tail->next == NULL && head2 != NULL) { 
			tail->next = head2; 
			break; 
		} 
		tail = tail->next; 
	} 
	return head1; 
} 

// Sort the linked list using bubble sort 
void sortlist(node* head1) 
{ 
	node* curr = head1; 
	node* temp = head1; 

	while (curr->next != NULL) { 

		temp = curr->next; 
		while (temp != NULL) { 

			if (temp->data < curr->data) { 
				int t = temp->data; 
				temp->data = curr->data; 
				curr->data = t; 
			} 
			temp = temp->next; 
		} 
		curr = curr->next; 
	} 
} 

// Driver Code 
int main() 
{ 
	node* head1 = new node; 
	node* head2 = new node; 

	head1 = NULL; 
	head2 = NULL; 

	head1 = append(head1, 4); 
	head1 = append(head1, 7); 
	head1 = append(head1, 5); 
	head1 = append(head1, 3);

	head2 = append(head2, 2); 
	head2 = append(head2, 6); 
	head2 = append(head2, 8); 
	head2 = append(head2, 1); 

	head1 = mergelists(head1, head2); 
	
	sortlist(head1); 
 	printList(head1); 
	return 0; 
} 

