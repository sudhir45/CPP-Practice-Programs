#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the no of rows : "<<endl;
	int n; 
	cin>>n;
	cout<<endl;
	
	int space = n - 1;   
    for (int i = 0; i < n; i++)  
    {   
        for (int j = 0;j < space; j++)  
            cout << " ";  
        for (int j = 0; j <= i; j++)  
            cout << "* ";  
        cout << endl;  
        space--;  
    }
	space = 0;
	for(int i=n ;i>0; i--){
		for(int j=0; j<space; j++)
			cout<<" ";
		for(int j=0; j<i;j++)
			cout<<"* ";
		cout<<endl;
		space++;
	}  
	return 0;
}
