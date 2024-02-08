#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int A[5];
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;

    int B[5] = {100, 200, 300, 400, 500};

    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    for(int element: B){
        printf("%d, ", element);
    }


    return 0;
}