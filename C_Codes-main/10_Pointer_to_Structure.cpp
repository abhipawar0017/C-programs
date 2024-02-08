#include <iostream>
#include <stdlib.h>

using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
int main() {
    struct Rectangle r = {10, 20};
    struct Rectangle *pqr = &r;
    (*pqr).length = 100;
    (*pqr).breadth = 200;
    
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    printf("\n");
    cout<<(*pqr).length<<endl;
    cout<<(*pqr).breadth<<endl;

    return 0;
}