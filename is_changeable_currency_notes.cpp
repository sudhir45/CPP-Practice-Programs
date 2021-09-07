#include <iostream>
using namespace std;

int ischangeable(int notes[], int n){
	int fivecount = 0;
	int tencount = 0;
	
	for(int i=0; i<n; i++){
		if(notes[i] == 5)
			fivecount++;
		else if(notes[i] == 10){
			if(fivecount > 0){
				fivecount--;
				tencount++;
			}
			else
				return 0;
		}
		else{
			if(fivecount>0 && tencount>0){
				fivecount--;
				tencount--;
			}
			else if(fivecount>=3)
				fivecount-=3;
			else
				return 0;
		}	
		
	}
	return 1;
}

int main(){
	int a[] = {5,5,5,20};
	int n = sizeof(a)/sizeof(a[0]);
	if(ischangeable(a,n))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
