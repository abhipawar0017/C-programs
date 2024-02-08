#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle {
    int length;
    int breadth;
};
void initilization(struct Rectangle *ptr, int len, int bdh){
    ptr->length = len;
    ptr->breadth = bdh;
}
int area(struct Rectangle pqr) {
    int area = pqr.length * pqr.breadth;
    return area;
}
int perimeter(struct Rectangle pqr) {
    int perimeter = 2 * (pqr.length + pqr.breadth);
    return perimeter;
}
int main()
{  
    struct Rectangle r;
    initilization(&r, 3, 6);
    int ar = area(r);
    int per = perimeter(r);
    cout<<"The area is: "<<ar<<endl;
    cout<<"The Perimeter is: "<<per<<endl;
    
    return 0;
}