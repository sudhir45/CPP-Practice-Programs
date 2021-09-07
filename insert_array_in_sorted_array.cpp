#include <iostream> 
using namespace std; 

int insertele(int arr[], int n, int capacity, int key){
	if(n>capacity)
		return n;
	else{
		arr[n] = key;
	}
	return n+1;
}

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[20] = {1,2,3,4,5};
	int n = 5;
	int capacity = sizeof(arr)/sizeof(arr[0]);
	
	n = insertele(arr,n,capacity, 6);
	print(arr,n);
	return 0;
}
