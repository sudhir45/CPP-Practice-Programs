#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
	bool swapped = false;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;	
			}
		}
		if(swapped = false)
			return;
	}
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printarray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {9,8,7,6,5,3,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printarray(arr, n);
	bubblesort(arr, n);
	printarray(arr, n);
	
	return 0;
}
