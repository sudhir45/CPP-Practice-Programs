#include <bits/stdc++.h>
using namespace std;

void waveformsort(int arr[], int n){
	for(int i=0; i<n;i+=2){
		if(i>0 && arr[i-1] > arr[i])
			swap(arr[i], arr[i-1]);
		if(i<n-1 && arr[i] < arr[i+1])
			swap(arr[i], arr[i+1]);
	}
}

int main(){
	int arr[] = {10, 90, 49, 2, 1, 5, 23, 4, 3, 44, 85, 54	}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    waveformsort(arr, n); 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
    return 0;
}
