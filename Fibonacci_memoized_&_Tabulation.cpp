#include <stdio.h>
#include <time.h>
using namespace std;

#define NIL -1
#define MAX 100

int lookup[MAX];
void _initialize(){
	for(int i=0; i<MAX; i++){
		lookup[i] = NIL;
	}
}

int fib_memoized(int n){
	if(lookup[n] == NIL){
		if(n <= 1)
			lookup[n]=n;
		else{
			lookup[n] = fib_memoized(n-1)+fib_memoized(n-2);
		}
	}
	return lookup[n];
}

int fib_tabulation(int n){
	int f[n+1];
	f[0] = 0;
	f[1] = 1;
	for(int i=2; i<n; i++)
		f[i] = f[i-1] + f[i-2];
	return f[n];
}

int main(){
	_initialize();

	clock_t begin1 = clock();
	printf("Fibonacci number is %d \n", fib_memoized(40));
	clock_t end1 = clock();
	double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
	printf("\nTime Taken for memoized %lf", time_spent1);
	
	clock_t begin2 = clock();
	(fib_memoized(40));
	clock_t end2 = clock();
	double time_spent2 = (double)(end2 - begin2) / CLOCKS_PER_SEC;
	printf("\nTime Taken for tabulation %lf", time_spent2);
}



