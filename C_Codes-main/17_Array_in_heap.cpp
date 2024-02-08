#include <iostream>
#include <stdlib.h>

using namespace std;

int * array(int num) {
    int *pqr = (int *) malloc(sizeof(sizeof(int) * num));
    return pqr;
}

int main() {
    int *p;
    p = array(5);
    for(int i=0; i<5; i++) {
        printf("Enter a number at index %d: ",i);
        cin>>p[i];
    }
    for(int i=0; i<5; i++) {
        cout<<p[i]<<", ";
    }
    return 0;
}