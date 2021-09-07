#include <bits/stdc++.h>
//#include <stdio.h>
using namespace std;

void minsumpair(int arr[], int n){
	int sum, min_sum = 10000;
	int l=0, r=n-1;
	int min_l=l, min_r=r;
	
	if(n<2)
		return;
	sort(arr, arr+n);
	while(l < r){
		sum = arr[l] + arr[r];
		if(abs(sum) < abs(min_sum)){
			min_sum = sum;
			min_l = l;
			min_r = r;
		}
		if(sum<0)
			l++;
		else
			r--;
	}
	cout<<"Closest pair is : ("<<arr[min_l]<<","<<arr[min_r]<<")";
}

int main(){
	int arr[]= {-3, 3, 4, -5, 6, 2, 4, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	minsumpair(arr, n);
	return 1;
}
