#include <iostream>
using namespace std;

void movezerostolast(int arr[], int n){
	int count = 0;
	//n = sizeof(arr)/sizeof(arr[0]);
	//1. Using two loops 
	/*
	for(int i=0; i<n; i++)
		if(arr[i] != 0)
			arr[count++] = arr[i];
	
	while(count<n)
		arr[count++] = 0;
	*/	
	//2. Using a single loop & using swap function
	for(int i=0; i<n; i++)
		if(arr[i] != 0)
			swap(arr[count++], arr[i]);
}

int main(){
	int arr[] = {0,0,5,0,4,7,0,5,2,0,3,6,0,5,0,0,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	movezerostolast(arr,n);
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	return 0;
}
