#include <iostream>
using namespace std;

void makearray(){
	int arr[100], input, count=0,i=0;
	
	while(cin >> input){
    	arr[i++]= input;
		count++;
	}
	//int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<count; i++)
		cout<<arr[i]<<" ";  
}

int main(){
	int n = 5;
	makearray();
	return 0;
}
