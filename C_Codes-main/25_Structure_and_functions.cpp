#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
void initilazation(struct Rectangle *pqr, int len, int brd){
    pqr->length = len;
    pqr->breadth = brd;
}
int area(struct Rectangle pqr) {
    int area = pqr.length * pqr.breadth;
    return area;
}
void changeLength(struct Rectangle *p, int len) {
    p->length = len;
}
int main()
{  
    struct Rectangle r;
    initilazation(&r, 5, 10);
    int area1 = area(r);
    changeLength(&r, 10);
    cout<<"The area of rectangle is "<<area1<<endl;

    
    return 0;
}