#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print(queue<int>& que){
	while(!que.empty()){
		cout<<que.front()<<" ";
		que.pop();
	}
}

void reverseuptok(int k, queue<int>& que){
	
	if(que.empty()==true || k>que.size())
		return;
	if(k <=0 )
		return;
	
	stack<int> stk;
	for(int i=0; i<k; i++){
		stk.push(que.front());
		que.pop();
	}
	
	while(!stk.empty()){
		que.push(stk.top());
		stk.pop();
	}
	
	for(int i=0; i<(que.size()-k); i++){
		que.push(que.front());
		que.pop();
	}
}

void reverseuptokiterative(int k){
	node *p;
	node *q;
	node *r;

	//stores first element for later use
	node *temp=front;

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

int main(){
	queue<int> Queue; 
    Queue.push(10); 
    Queue.push(20); 
    Queue.push(30); 
    Queue.push(40); 
    Queue.push(50); 
    Queue.push(60); 
    Queue.push(70); 
    Queue.push(80); 
    Queue.push(90); 
    Queue.push(100); 
  
    int k = 5; 
    reverseuptok(k, Queue); 
    print(Queue); 
	
	return 0;
}
