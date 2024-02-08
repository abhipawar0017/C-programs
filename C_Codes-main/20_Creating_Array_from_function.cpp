#include <iostream>
#include <stdlib.h>
using namespace std;

int * array(int num){
    int *pqr;
    pqr = (int *)malloc(sizeof(int) * num);
    int num1 = 10;
    for(int i=0; i<num; i++) {
        pqr[i] = num1;
        num1 = num1 + 10;
    }
    return pqr;
}
int main()
{   
    int size = 10;
    int *p = array(size);
    for(int i=0; i<size; i++) {
        cout<<p[i]<<" ";
    }
    
    return 0;
}