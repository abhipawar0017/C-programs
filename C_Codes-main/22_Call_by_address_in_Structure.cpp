#include <iostream>
#include <stdlib.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};
int area(struct rectangle pqr) {
    int area = pqr.length * pqr.breadth;
    return area;
}
void changeLength(struct rectangle *pqr, int len){
    pqr->length = len;
}
int main()
{   
    struct rectangle r = {4, 5};
    printf("The area of rectangle is:%d\n", area(r));
    changeLength(&r, 25);
    printf("The area of rectangle is:%d\n", area(r));
    

    
    return 0;
}