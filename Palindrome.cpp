#include <iostream>
#include <string.h>
using namespace std;

void palindrome_number(int num){
	int temp=num, sum=0, r;
	while(temp>0){
		r = r%10;
		sum = (sum*10) + r;
		temp /= 10;	
	}
	if(n == sum){
		cout<<"Palindrome ";
	}
	else
		cout<<"not palindrome ";
}

void palindrome_string(char str[]){
	int l=0;
	int h=strlen(str)-1;
	while(h>l){
		if(str[l++] != str[h--]){
			cout<<"Not a palindrome ";
			return;
		}
	}
	cout<<"Palindrome";
}

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
      		return false;
	return true;
}

int main(){
	char str[] = "abcdeedcba";
	int count, i=0;
	if(check_number(str) == false)
		palindrome_number(str);
	else
		palindrome_string(str);
		
	while(str[i++] != '\0'){
		count +=1;
	}
	cout<<endl<<count;
	return 0;
}
