#include <iostream>
#include <stdlib.h>

using namespace std;
void printarray(int a[], int n) {
    a[2] = 200;
    a[3] = 300;
    for(int i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(int);
    printarray(arr, size);

    return 0;
}