#include <bits/stdc++.h> 
using namespace std;

void rearrange(int arr[], int n){
	
	int index = 0;
	//int n = sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	sort(arr, arr+n);
	int i, j;
	for( i=0, j=n-1; i<=n/2 || j>n/2; i++, j--){
		temp[index++] = arr[i];
		temp[index++] = arr[j];
	}
	
	for(i=0; i<n;i++)
		arr[i]=temp[i];
}

int main(){
	int arr[] = {9,5,7,6,8,3,1,2,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	rearrange(arr, n);
	for(int i=0; i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
