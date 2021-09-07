#include <bits/stdc++.h>
int countder(int n){
    if(n==1 || n==2)
        return n-1;
        
    int a=0, b=1;
    for(int i=3; i<=n; ++i){
        int curr = (i-1)*(a+b);
        a = b;
        b = curr;
    }
    return b;
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    //for(int i=0; i<n; ++i){
    //    std::cin>>arr[i];
    //}
    int num = countder(n);
    std::cout<<num;
    //for(int i=0; i<n; ++i){
    //    std::cin>>arr[i];
    //}
    return 0;
}