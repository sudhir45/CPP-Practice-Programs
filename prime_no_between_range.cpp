#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

void rangeprime(int num1, int num2){
	for(int i=num1; i<num2; i++){
		if (i == 1 || i == 0) 
            continue; 
		int flag = 0;
		for(int j=2; j<=(i/2); j++){
			if(i%j == 0){
				flag = 1;
				break;
			}
		}
		if(flag = 0)
		cout<<i<<" ";
	}
}

int main() 
{ 
    int a, b, i, j, flag; 
  
    cout << "Enter lower bound of the interval: "; 
    cin >> a; 
  
    
    cout << "\nEnter upper bound of the interval: "; 
    cin >> b; 
  
    
    cout << "\nPrime numbers between "
         << a << " and " << b << " are: "; 
  
  	rangeprime(a, b);
/*  
    for (i = a; i <= b; i++) { 
        if (i == 1 || i == 0) 
            continue; 
  		flag = 1; 
  
        for (j = 2; j <= i / 2; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        } 
        if (flag == 1) 
            cout << i << " "; 
    }
*/ 
    return 0; 
} 
