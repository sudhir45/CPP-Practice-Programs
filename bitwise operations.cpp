#include <stdio.h>
#include <bits/stdc++.h>

int main()
{
    int x = 2, y = 5;
    (x & y) ? printf("True ") : printf("False ");
    (x && y) ? printf("True ") : printf("False ");
    std::cout<<(1 && 1)<<"     "<<(x & y)<<std::endl;
    
    int z = 10;
    (z & 1) ? printf("Odd") : printf("Even");

    return 0;
}

