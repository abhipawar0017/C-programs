#include <iostream>
#include <stdlib.h>
using namespace std;
struct rectangle {
    int length;
    int breadth;
};

void change(struct rectangle &pre){
    pre.length = 3;
    pre.breadth = 6;
}
int area(struct rectangle pqr) {
    int area = pqr.length * pqr.breadth;
    return area;
}

int main()
{
    struct rectangle r = {5, 10};
    printf("Before changing\n");
    printf("%d\n", area(r));
    change(r);
    printf("After changing\n");
    printf("%d\n", area(r));

    return 0;
}