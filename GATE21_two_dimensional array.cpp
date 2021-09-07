#include <stdio.h>

int main()
{
    int arr[4] [5] ;

    int i, j, k;

    for (i=0; i<4; i++) { 
        for (j=0; j<5; j++){ 
            arr[i][j] = 10*i + j;
        }
    }
  
    for(k=0; k<12; k++){
      printf("%d ", *(arr[1]+k));
    }
    
    printf ("%d", *(arr[1] + 9) );

    return 0;
}
