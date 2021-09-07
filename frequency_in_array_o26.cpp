#include<bits/stdc++.h> 
using namespace std;

void frequency(string arr, int n){
	int i=0;
	int freq[26] = {0};
	while(arr[i]!='\0'){
		freq[arr[i]-'a']++;
		i++;
	}
	
	for(int i=0; i<26; i++){
		if(freq[i]!=0){
			printf("%c%d", i+'a', freq[i]);
		}
	}
}

int main(){
	string arr = "aaaabcd";
	
	int n = sizeof(arr)/sizeof(arr[0]);
	frequency(arr, n);
	return 0;
}
