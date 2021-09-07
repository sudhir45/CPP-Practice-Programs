#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the no of rows : "<<endl;
	int n;
	cin>>n;
	cout<<endl;	
	
	for(int i=n; i>=0; i--){
		for(int j=0; j<=2*n-1; j++){
			if(j>=n-i-1 && j<=n+i-1){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
