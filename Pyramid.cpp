#include <iostream>
using namespace std;

void pyramid(int n){
	
	int k=2*n - 2, sum=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			cout<<" ";
		}
		k= k-1;
		for(int j=0; j<=i; j++){
			sum+=1;
			cout<<sum<<"  ";
		}
		
		cout<<endl;
	}
}


int main(){
	cout<<"Enter the no of rows : "<<endl;
	int n;
	cin>>n;
	cout<<endl;	
	pyramid(n);	
	return 0;
}
