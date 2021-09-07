#include <iostream>
using namespace std;

struct node{
	int data;
	node* next, *prev;
	
	static node* getnode(int data){
		node* new_node = new node();
		new_node->data = data;
		new_node->prev = new_node->next = NULL;
		return new_node;
	}
};

class deque{
	node* front, *rear;
	
	public:
		int size;
		deque(){
			front = rear = NULL;
			size = 0;
		}
		void insertfront(int data);
		void insertrear(int data);
		void deletefront();
		void deleterear();
		int getfront();
		int getrear();
		int Size();
		bool isempty();
		void erase();
};

bool deque::isempty(){
	return (front == NULL);
}

int deque::Size(){
	return size;
}

void deque::insertfront(int data){
	node* new_node = node::getnode(data);
	if(new_node == NULL)
		cout<<"overflow\n";
	else{
		if(front == NULL)
			rear = front = new_node;
		else{
			new_node->next = front;
			front->prev = new_node;
			front = new_node;
		}
		size++;
	}
}

void deque::insertrear(int data){
	node* new_node = node::getnode(data);
	if(new_node == NULL)
		cout<<"overflow\n";
	else{
		if(rear == NULL)
			rear = front = new_node;
		else{
			new_node->prev = rear;
			rear->next = new_node;
			rear = new_node;
		}
		size++;
	}
}

void deque::deletefront(){
	if(isempty())
		cout<<"Underflow\n";
	else{
		node* temp = front;
		front = front->next;
		
		if(front == NULL)	// if only one element was present.
			rear = NULL;
		else
			front->prev = NULL;
		free(temp);
		size--;
	}
}

void deque::deleterear(){
	if(isempty())
		cout<<"Underflow\n";
	else{
		node* temp = rear;
		rear = rear->prev;
		
		if(rear == NULL)	// if only one element was present.
			front = NULL;
		else
			rear->next = NULL;
		free(temp);
		size--;
	}
}

int deque::getfront(){
	if(isempty())
		return -1;
	return front->data;
}

int deque::getrear(){
	if(isempty())
		return -1;
	return rear->data;
}

void deque::erase(){
	rear = NULL;
	while(front != NULL){
		node* temp = front;
		front = front->next;
		free(temp);
	}
	size = 0;
}

int main(){
	deque dq; 
    cout << "Insert element '5' at rear end\n"; 
    dq.insertrear(5); 
  
    cout << "Insert element '10' at rear end\n"; 
    dq.insertrear(10); 
  
    cout << "Rear end element: "
        << dq.getrear() << endl; 
  
    dq.deleterear(); 
    cout << "After deleting rear element new rear"
        << " is: " << dq.getrear() << endl; 
  
    cout << "Inserting element '15' at front end \n"; 
    dq.insertfront(15); 
  
  	cout << "Inserting element '13' at front end \n"; 
    dq.insertfront(13); 
  	
    cout << "Front end element: "
        << dq.getfront() << endl; 
  
    cout << "Number of elements in Deque: "
        << dq.Size() << endl; 
  
    dq.deletefront(); 
    cout << "After deleting front element new "
        << "front is: " << dq.getfront() << endl; 
  
    return 0; 
}












