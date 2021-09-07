#include <iostream>
#include <stdio.h>
//#include<>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int array[] = {3, 5, 1, 4, 6, 2};
    int done =0;
    int i;
    while (done==0) {
        done =1;
        for (i=0; i<=4; i++) {
            if (array[i] < array[i+1]) {
                swap(&array[i], &array[i+1]);
                done=0;
            }
        }
        for (i=5; i>=1; i--) {
            if (array[i] > array[i-1]) {
                swap(&array[i], &array[i-1]);
                done =0;
            }
        }
    }
    std::cout<< array[3];
}
