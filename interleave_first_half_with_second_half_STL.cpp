#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void print(queue<int>& q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
void interleave(queue<int>& q){
	if (q.size() <= 0){
		cout<<"Enter even count of numbers.";
		return;
	}
	
	stack<int> s;
	int halfsize = q.size()/2;
	
	for(int i=0; i<halfsize; i++){
		s.push(q.front());
		q.pop();
	}
	
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	
	for(int i=0; i<halfsize; i++){
		q.push(q.front());
		q.pop();
	}
	
	for(int i=0; i<halfsize; i++){
		s.push(q.front());
		q.pop();
	}
	
	while(!s.empty()){
		q.push(s.top());
		s.pop();
		q.push(q.front());
		q.pop();
	}
}


int main() 
{ 
    queue<int> q; 
    q.push(11); 
    q.push(12); 
    q.push(13); 
    q.push(14); 
    q.push(15); 
    q.push(16); 
    q.push(17); 
    q.push(18); 
    q.push(19); 
    q.push(20); 
    interleave(q); 
	print(q);   
    return 0; 
} 
