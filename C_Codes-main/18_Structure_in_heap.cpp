#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle * structMemory(){
    struct Rectangle *ptr; 
    ptr = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    return ptr;
}
int main()
{
    struct Rectangle *r1;
    r1 = structMemory();
    r1->length = 10;
    r1->breadth = 20;
    cout<<"The area of first rectangle is:"<<r1->length*r1->breadth<<endl;
    
    struct Rectangle *r2;
    r2 = structMemory();
    r2->length = 100;
    r2->breadth = 200;
    cout<<"The area of first rectangle is:"<<r2->length*r2->breadth<<endl;

    
    
    return 0;
}