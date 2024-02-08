#include <iostream>
#include <stdlib.h>
using namespace std;

int area(int len, int bdt){
    int area = len * bdt;
    return area;
}
int perimeter(int len, int bdt) {
    int perimeter = 2 * (len + bdt);
    return perimeter;
}

int main()
{   
    int length = 0;
    int breadth = 0;
    cout<<"Enter a length: ";
    cin>>length;
    cout<<"Enter a breadth: ";
    cin>>breadth;
    int area1 = area(length, breadth);
    cout<<"The area of rectangle is: "<<area1<<endl;
    int perimeter1 = perimeter(length, breadth);
    cout<<"The perimeter of rectangle is: "<<perimeter1<<endl;
    
    return 0;
}