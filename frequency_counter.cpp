#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

int frequency(int arr[], int n){
	int max_count=1, curr_count=1, res = arr[0];
	sort(arr, arr+n);
	for(int i=1; i<n; ++i){
		if(arr[i]==arr[i-1]){
			curr_count+=1;
		}
		else{
			if(curr_count>max_count){
				max_count=curr_count;
				res = arr[i-1];
			}
			curr_count=1;
		}
	}
	if(curr_count>max_count){
		max_count=curr_count;
		res = arr[n-1];
	}
	return res;
}

int main(){
	int arr[] = {1,2,2,2,2,2,2,3,4,5,2,3,5,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<frequency(arr, n);
	return 0;
}
