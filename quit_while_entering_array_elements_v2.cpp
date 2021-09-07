#include <bits/stdc++.h>
#include <vector>	
using namespace std;

int main(){
	int addDigit, i=0;
	vector<int> values;

	while(cin >> addDigit) {
		values.push_back(addDigit);
	}

	cout << "Elements in array are: ";
	for (int i = 0; i < values.size(); ++i) {
		cout << values[i]<<" ";
	}
	cout << "\n" << endl;

	return 0;
}
