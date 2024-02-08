#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle *p;
    p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    p->length = 10;
    p->breadth = 20;

    Rectangle *q;
    q = new Rectangle;
    q->length = 100;
    q->breadth = 200;
    
    
    return 0;
}