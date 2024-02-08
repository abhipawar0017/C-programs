#include <iostream>
#include <stdlib.h>
using namespace std;
class Rectangle {
    private:
       int length;
       int breadth;
    public:
    Rectangle(int len, int bdh) {
        length = len;
        breadth = bdh;
    }
    int area(){
        int area = length * breadth;
        return area;
    }
    void changeLength(int len){
        length = len;
    }
};
int main()
{
    Rectangle r(3, 6);
    int area1 = r.area();
    cout<<"The area of rectangle is:"<<area1<<endl;
    r.changeLength(6);
    
    return 0;
}