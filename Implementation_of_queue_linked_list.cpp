#include <iostream>
using namespace std;

struct qnode{
	int data;
	qnode* next;
	qnode(int d){
		data = d;
		next = NULL;
	}
};

struct queue{
	qnode *front, *rear;
	queue(){ front = rear = NULL; }
	
	void enqueue(int x){
		qnode* temp = new qnode(x);
		if(rear == NULL){
			front = rear = temp;
			cout<<temp->data<<" is inserted in queue\n";
			return;
		}
		
		rear->next = temp;
		rear = temp;
		cout<<""<<temp->data<<" is inserted in queue\n";
	}
	
	void dequeue(){
		if(front == NULL)
			return;
			
		qnode* temp	= front;
		front = front->next;
		
		if(front == NULL)
			rear = NULL;
			
		cout<<""<<temp->data<<" is removed from queue\n";
		free(temp);
	}
	
	void print(){
		qnode* travel = front;
		while(travel != NULL){
			cout<<travel->data<<" ";
			travel = travel->next;
		}
	}
	
	void reverse(){
		qnode *p;
		qnode *q;
		qnode *r;

		p=front;
		q=r=NULL;

		while(p){
			r=q;
			q=p;
			p=p->next;
			q->next=r;
		}
		rear=front;
		front=q;
	}
	
	void reverseuptok(int k){
		qnode *p;
		qnode *q;
		qnode *r;

		//stores first element for later use
		qnode *temp=front;

		p=front;
		q=r=NULL;

		while(k--){
			r=q;
			q=p;
			p=p->next;
			q->next=r;
		}
		front=q;
		temp->next=p;
	}
};

int main(){
	queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.dequeue();
	q.dequeue();
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	cout<<"the queue is : ";
	q.print();
	cout<<"\nfront of the queue is : "<< q.front->data<<endl;
	cout<<"rear of the queue is : "<< q.rear->data<<endl;
	q.reverse();
	cout<<"after reversing the queue is : ";
	q.print();
	q.reverseuptok(3);
	cout<<"\nAfter reversing upto k elements : ";
	q.print();
	return 0;
}

