#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
int digitSum(int n)
{
    int sum;
    for (sum=0; n > 0; sum+=n%10,n/=10);
    return sum;
}

int numberOfCarryOperations(int a,int b){
    return (digitSum(a) + digitSum(b) - digitSum(a+b)) / 9;
}

int main(){
	int a=1499, b=2517;
	std::cout<<numberOfCarryOperations(a, b);
	return 0;
}
