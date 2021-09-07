#include <bits/stdc++.h> 
using namespace std; 

void sumpair(int A[], int arr_size, int sum) 
{ 
	int l, r; 
	sort(A, A + arr_size); 
	
	l = 0; 
	r = arr_size - 1; 
	while (l < r && (l != r)) { 
		if (A[l] + A[r] == sum) 
			cout<<"("<<A[l]<<","<<A[r]<<")"<<endl; 
		else if (A[l] + A[r] < sum) 
			l++; 
		else 
			r--; 
	}  
} 

int main() 
{ 
	int A[] = { 1, 4, 45, 6, 10, -8 }; 
	int n = 16; 
	int arr_size = sizeof(A) / sizeof(A[0]); 
	sumpair(A, arr_size, n);
	return 0; 
} 

