#include <iostream>
using namespace std;

int revdigits(int num){
	
	int rev = 0;
	while(num>0){
		rev = rev*10 + num%10;
		num = num/10;
	}
	return rev;
}

int main(){
	int num = 12345;
	cout<<"Given no is : "<<num<<endl;
	int rev = revdigits(num);
	cout<<"reversed no is : "<<rev<<endl;
	return 0;
}
