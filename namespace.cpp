// Creating namespaces 
#include <iostream> 
using namespace std; 
namespace ns1 
{ 
	int value() { return 5; } 
} 

namespace ns2 
{ 
	const double x = 100; 
	double value() { return 2*x; } 
} 

namespace ns2
{
	int func(){
		return 50;
	}
}

int main() 
{ 
	// Access value function within ns1 
	cout << ns1::value() << endl; 

	// Access value function within ns2 
	cout << ns2::value() << endl; 

	// Access variable x directly 
	cout << ns2::x << endl;	 
	
	// acessing values from same named namespaces
	cout << ns2::func();
	return 0; 
} 

