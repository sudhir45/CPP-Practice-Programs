//#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void movenegpos(int arr[], int n){
	int s=0, e=n-1;
	while(s<=e){
		if(arr[s]<0 && arr[e]<0){
			s++;
		}
		else if(arr[s]>0 && arr[e]<0){
			swap(arr[s], arr[e]);
			s++;
			e--;
		}
		else if(arr[s]>0 & arr[e]>0){
			e--;
		}
		else{
			s++;
			e--;
		}
	}
}

int main(){
	int arr[]= {1,-2,3,4,5,-5,-9,8,-3};
	int n = sizeof(arr)/sizeof(arr[1]);
	movenegpos(arr, n);
	//sort(arr, arr+n);
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	return 0;
}
