#include <iostream>
#include <stdlib.h>
using namespace std;

void printarray(int a[], int n){
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    printf("\n");
    cout<<"The size of array in function is: "<<sizeof(a)/sizeof(int)<<endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    printf("\n");

    cout<<"The size of array in main function is: "<<sizeof(arr)/sizeof(int)<<endl;
    printarray(arr, n);
    return 0;
}