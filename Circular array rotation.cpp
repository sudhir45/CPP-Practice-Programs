/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, k, q;
    std::cout << "Enter no of elements : " << std::endl;
    std::cin >> n;
    int arr[n];
    
    std::cout << "Enter no of rotations :" << std::endl;
    cin >> k;
    
    std::cout << "Enter elements in array : " << std::endl;
    for(int i=0; i<n; i++){
        cin >> arr[(i+k)%n];
    }
    
    std::cout << "Enter no of queries : " << std::endl;
    cin >> q;
    int qe[q];
    std::cout << "Enter elements of queries : " << std::endl;
    for(int i=0; i<q; i++){
        cin >> qe[i];
    }
    
    for(int j : qe){
        std::cout << arr[j] << std::endl;
    }

    return 0;
}
