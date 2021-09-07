#include <iostream>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partion(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    
    for(int j=low+1; j<=high; j++){
    	if(arr[j]<pivot){
    		swap(&arr[i],&arr[j]);
    		i++;
		}
	}
	swap(&arr[i-1], &arr[low]);
	return i-1;
}

void quicksort(int arr[], int low, int high){
    if(low<high){
        int p= partion(arr, low, high);
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}
int main() {
    int arr[] = {4,9,1,8,3,6,5};
	int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"array before sorting : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout<<endl<<"array after sorting : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



//
