#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"How many records u want to enter : ";
	cin>>n;
	std::string name[n];
	int marks[n];
	
	cout<<"Enter names and marks concurently. "<<endl;
	for(int i=0; i<n; i++ ){
		cin>>name[i];
		cin>>marks[i];
	}
	
	cout<<"Grade A+ "<<endl;
	for(int i=0; i<n; i++){
		if(marks[i] >80){
			cout<<name[i]<<" "<<marks[i]<<"%"<<endl;
		}	
	}
	cout<<"Grade A "<<endl;
	for(int i=0; i<n; i++){
		if(marks[i] >60 && marks[i] <=80){
			cout<<name[i]<<" "<<marks[i]<<"%"<<endl;
		}	
	}
	cout<<"Grade B "<<endl;
	for(int i=0; i<n; i++){
		if(marks[i] >50 && marks[i] <=60){
			cout<<name[i]<<" "<<marks[i]<<"%"<<endl;
		}	
	}
	cout<<"Grade C "<<endl;
	for(int i=0; i<n; i++){
		if(marks[i] >=35 && marks[i] <=50){
			cout<<name[i]<<" "<<marks[i]<<"%"<<endl;
		}	
	}
	cout<<"Fail "<<endl;
	for(int i=0; i<n; i++){
		if(marks[i] <35){
			cout<<name[i]<<" "<<marks[i]<<"%"<<endl;
		}	
	}
	return 0;
}
