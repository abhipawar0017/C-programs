#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = &arr[0];

    // Approach 1:
    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++) {
         cout<<*ptr<<" ";
         ptr++;
    }
    printf("\n");
    
    // Approach 2:
    int *pqr = arr;
    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++) {
        cout<<*pqr<<" ";
        pqr++;
    }
    printf("\n");

    // Approach 3:
    int *prq = arr;
    for(int i=0; i<(sizeof(arr)/sizeof(int)); i++) {
        cout<<prq[i]<<" ";

    }

    return 0;
}