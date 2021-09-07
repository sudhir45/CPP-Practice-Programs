#include <bits/stdc++.h>
using namespace std;

int lesser(int a, int b, int c){
	int k=0;
	while(a || b || c){
		a--;
		b--;
		c--;
		k++;
		if(a==0){
			a++;
		}
		if(b==0){
			b++;
		}
		if(c==0){
			c++;
		}
	}
	return k;
}

int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int less = lesser(a,b,c);
	cout<< less;
	return 0;
}
