#include<iostream>
using namespace std;

void hollowpyramid(int n){
	
	for(int i=1; i<=n; i++){
		for(int j=i; j<n; j++){
			cout<<" ";
		}
		
		for(int j=1; j<=(2*n -1); j++){
			if(i==n || j==1 || j==2*i -1){
				cout<<"*";
			}
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<endl;
	hollowpyramid(n);
	return 0;
}
