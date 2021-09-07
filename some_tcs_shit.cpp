#include<bits/stdc++.h>
using namespace std;


void function1(int n)
{
    int p = 0;
    for (int i=0; i<=n; i++)
        for (int j=n/2; j<=n; j = j++)
            for (int k=1; k<=n; k = k * 2)
                p++;
    cout<<p;
}

int main(){
	int n=7;
	function1(n);
	return 0;
}

