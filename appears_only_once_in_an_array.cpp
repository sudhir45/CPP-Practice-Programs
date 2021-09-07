#include <iostream> 
using namespace std; 

int singlenum(int arr[], int n){
	int res = arr[0];
	for(int i=1; i<n; i++)
		res = res ^ arr[i];
	return res;
}

int main(){
	int arr[] = {1,2,3,4,5,2,3,5,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<singlenum(arr, n);
	return 0;
}
