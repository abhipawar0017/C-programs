#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;
    
    public:
    void initilazation(int len, int bdh) {
        length = len;
        breadth = bdh;
    }
    int area() {
        int area = length * breadth;
        return area;
    }
    int perimeter() {
        int perimeter = 2 * (length + breadth);
        return perimeter;
    }
    };
int main()
{   
    Rectangle p;
    p.initilazation(3, 6);
    int are = p.area();
    int peri = p.perimeter();
    cout<<"The area of rectangle is:"<<are<<endl;
    cout<<"The perimeter of rectangle is:"<<peri<<endl;


    
    return 0;
}