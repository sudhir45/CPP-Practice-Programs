#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the no of rows : "<<endl;
	int n, sum=65;
	cin>>n;
	cout<<endl;	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			char ch = char(sum);
			cout<<ch<<" ";
			sum+=1;
		}
		cout<<endl;
		//sum+=1;
	}
	return 0;
}
