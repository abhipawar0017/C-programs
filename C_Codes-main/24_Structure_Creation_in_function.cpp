#include <iostream>
#include <stdlib.h>
using namespace std;
struct rectangle {
    int length;
    int breadth;
};

struct rectangle * structure() {
    struct rectangle *pqr;
    pqr = (struct rectangle *)malloc(sizeof(struct rectangle));
    pqr->length = 11;
    pqr->breadth = 12;
    return pqr;
}

int main()
{
    struct rectangle *p = structure();
    cout<<"Length: "<<p->length<<endl<<"Breadth: "<<p->breadth;
    
    
    return 0;
}