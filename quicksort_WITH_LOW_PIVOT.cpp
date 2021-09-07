#include <iostream>
using namespace std;

int partion(int arr[], int s, int e){
    int pivot = arr[s];
    int i = s+1;
    for(int j=s+1; j<=e; j++){
        if(arr[j]<pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i-1];
    arr[i-1] = arr[s];
    arr[s] = temp;

    return i-1;
}

void quicksort(int arr[], int s, int e){
    if(s<e){a
        int p= partion(arr, s, e);
        quicksort(arr, s, p-1);
        quicksort(arr, p+1, e);
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



//int arr[] = {4,9,1,8,3,6,5};
	//int n = sizeof(arr)/sizeof(arr[0]);
