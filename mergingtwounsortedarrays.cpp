#include <bits/stdc++.h>
using namespace std; 

void sortmerge(int a[], int b[], int res[], int n, int m){
	sort(a, a+n);
	sort(b, b+m);
	int i=0, j=0, k=0;
	
	while(i<n && j<m){
		if(a[i]<=b[j]){
			res[k++] = a[i++];
//			i+=1;
//			k+=1;
		}
		else{
			res[k++] = b[j++];
//			j+=1;
//			k+=1;
		}
	}
	
	while(i<n){
		res[k++] = a[i++];
//		i+=1;
//		k+=1;	
	}
	while(j<m){
		res[k++] = b[j++];
//		j+=1;
//		k+=1;
	}
}

int main(){
	int a[] = {5,4,3,2,1};
	int b[] = {10,9,8,7,6,11,12};
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);
	int res[n+m];

	cout << "Array's after merging and sorting : ";
	sortmerge(a, b, res, n, m);
	for(int i=0; i<n+m; i++){
		cout<<res[i]<<" ";
	}
return 0;
}












