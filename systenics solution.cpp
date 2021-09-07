#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
/*
for n=7:
        A
       BA
      CBA
     DCBA
    EDCBA
   FEDCBA
  GFEDCBA
   FEDCBA
    EDCBA
     DCBA
      CBA
       BA
        A
*/
for(int i=0; i<n; i++){
	//int num = 65;
	for(int j=n; j>=i; j--)
		cout<<" "; 
	for(int j=i; j>=0; j--){
		char ch = char(j+65);
		cout<<ch;
		//num++;
	}
	cout<<endl;
}

for(int i=n-2; i>=0; i--){
	//int num = 65;
	for(int j=n; j>=i; j--)
		cout<<" "; 
	for(int j=i; j>=0; j--){
		char ch = char(j+65);
		cout<<ch;
		//num++;
	}
	cout<<endl;
}

}

int main(){
int n;
cin>>n;

pattern(n);
return 0;
}

