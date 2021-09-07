#include <bits/stdc++.h>
using namespace std;

int main(){
	int Marrin, Sarrin, product = 1, input;
	cout<<"Enter the no of elements in main array : ";
	cin>>Marrin;
	int Marr[Marrin];
	cout<<"Enter the elements in main array : ";
	for(int i=0; i<Marrin; i++)
		cin>>Marr[i];
	
	cout<<"Enter the no of elements in Secondary array : ";
	cin>>Sarrin;
	//int Sarr[Sarrin];
	cout<<"Enter the elements in main array : ";
	for(int i=0; i<Sarrin; i++){
		cin>>input;
		product *= Marr[input];
	}
	
	cout<<"product is : "<<product;
	return 0; 
}
