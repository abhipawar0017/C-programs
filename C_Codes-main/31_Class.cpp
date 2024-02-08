#include <iostream>
#include <stdlib.h>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle() {
        length = 1;
        breadth = 1;
    }
    Rectangle(int len, int bdh);
    int area();
    int perimeter();
    ~Rectangle() {
        cout<<"End up the program"<<endl;
    }
};
Rectangle :: Rectangle(int len, int bdh) {
    length = len;
    breadth = bdh;
}
int Rectangle :: area() {
    int area = length * breadth;
    return area;
}
int Rectangle :: perimeter() {
    int perimeter = length * breadth;
    return perimeter;
}
int main()
{  
    Rectangle r(3, 6);
    int a = r.area();
    cout<<"The area is:"<<a<<endl;
    int p = r.perimeter();
    cout<<"The perimeter is:"<<p<<endl;
    
    return 0;
}