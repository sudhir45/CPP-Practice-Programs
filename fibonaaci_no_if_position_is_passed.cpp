#include <iostream>
#include <cmath>
using namespace std;

void dpfib(int n){
	int a=0, b=1, c, i;
	if(n==0){
		cout<<	a;
	}
	if(n ==1){
		cout<<b;
	}
	for(i=2; i<=n; i++){
		c = a + b;
		a = b;
		cout<<b<<" ";
		b = c;
	}
	cout<<endl<<i;
	//return b;
//	O(n) & O(1)
}

int formfib(int n){
	double phi = (1+sqrt(5)) / 2;
	return round(pow(phi, n)/sqrt(5));
//	O(log n) & O(1)
//  sice pow is used it takes logn time to compute the power of given value.
}

int main(){
	dpfib(5);
	//long long int x = dpfib(5);
	//long long int y = formfib(40);
	//cout<<x;
	//cout<<endl<<y;
	
	return 0;
}
