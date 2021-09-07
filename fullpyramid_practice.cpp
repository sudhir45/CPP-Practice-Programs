#import<iostream>
using namespace std;

void fullpyramid(int n){
	int space = n-1;
	for(int i=0; i<n; i++){
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
		space--;
	}
	space = 0;
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
		space++;
	}
}

int main(){
	int n;
	cin>>n;
	cout<<endl;
	fullpyramid(n);
	return 0;
}
