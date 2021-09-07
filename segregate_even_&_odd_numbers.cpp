#include <iostream>
using namespace std;
// lumto partition based
void eventhenodd(int arr[], int n){
	int j = -1;
	for(int i=0; i<n; i++){
		if(arr[i]%2 == 0){
			j++;
			swap(arr[i], arr[j]);
		}
	}
}

void print(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

int main(){
	int arr[] = {12, 34, 45, 9, 8, 20, 3,2,4,5,6,8,7,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	eventhenodd(arr, n);
	print(arr, n);
	return 1;
}


