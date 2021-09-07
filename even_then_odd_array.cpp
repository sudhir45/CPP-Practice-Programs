#include <iostream>
using namespace std;

//O(n)
//O(1)
void evenodd(int arr[], int n){
	int i=-1, j=0;
	while(j<n){
		if(arr[j]%2 == 0){
			i++;
			swap(arr[j], arr[i]);
		}
		j++;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {1,3,5,7,9,11,13,15,17,19,2,4,6,8,10,12,14,16,18,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	evenodd(arr, n);
	return 0;
}

