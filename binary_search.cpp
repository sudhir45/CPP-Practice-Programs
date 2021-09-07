#include <bits/stdc++.h> 
using namespace std;

int binary_search(int arr[], int x, int l, int r){
	
	while(l<=r){
		int mid = (l+r)/2;
		
		if(arr[mid] ==x){
			return mid+1;
		}
		
		if(arr[mid]<x){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,3,4,9,2,8,5,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int x = binary_search(arr, 10, 0,n-1);
	(x!=-1) ? cout<<"Present at :"<<x<<endl : cout<<"not found";
	return 0;
}
