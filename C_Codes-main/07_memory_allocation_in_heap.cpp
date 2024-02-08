#include <iostream>
#include <stdlib.h>
#include <stdlib.h>

using namespace std;

int main() {
    int *p = (int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(int i=0; i<5; i++) {
        cout<<p[i]<<" ";
    }
    printf("\n");


    int *q = new int[5];
    for(int i=0; i<5; i++) {
        cout<<"Enter a Number at index of "<<i<<":";
        cin>>q[i];
    }

    for(int i=0; i<5; i++) {
        cout<<q[i]<<" ";
    }

    delete [] q;
    free(p);

    return 0;
}