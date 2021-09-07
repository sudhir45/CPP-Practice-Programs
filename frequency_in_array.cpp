#include<bits/stdc++.h> 
using namespace std;

void frequency(char arr[], int n){
	string str="";
	unordered_map<char,int> mp;
	for(int i=0; i<n; ++i){
		mp[arr[i]]++;
	}
	for(auto x : mp){
		cout<<x.first<<" : "<<x.second<<endl;
		str +=x.first;
		str +=x.second;
	}
	cout<<"\n"<<str<<endl;
}

	// To print elements according to first
    // occurrence, traverse array one more time
    // print frequencies of elements and mark
    // frequencies as -1 so that same element
    // is not printed multiple times.
    //for (int i = 0; i < n; i++) {
    //  if (mp[arr[i]] != -1)
    //  {
    //      cout << arr[i] << " " << mp[arr[i]] << endl;
    //      mp[arr[i]] = -1;
    //  }
    //}


int main(){
	char arr[5] = {'a','a','a','b','c'};
	int n = sizeof(arr)/sizeof(arr[0]);
	frequency(arr, n);
	return 0;
}
