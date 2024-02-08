#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
class Rectangle {
private:
    T a;
    T b;
public:
    Rectangle(T a, T b);
    T add();
    T subtract();        
};

template <class T>
Rectangle<T> :: Rectangle(T a, T b) {
    this->a = a;
    this->b = b;
}
template <class T>
T Rectangle<T> :: add() {
    T c = a + b;
    return c;
}
template<class T>
T Rectangle<T> :: subtract() {
    T c = a - b;
    return c;
}
int main()
{   
    Rectangle <int> r(5, 7);
    int a = r.add();
    cout<<"The addition of two numbers is:"<<a<<endl;
    int b = r.subtract();
    cout<<"The subtraction of two numbers is:"<<b<<endl;
    
    Rectangle <float> s(5.5, 8.3);
    int num = s.add();
    cout<<"The Sum of two numbers is:"<<num<<endl;
    int num1 = s.subtract();
    cout<<"The Subtract of two numbers is:"<<num1<<endl;

    
    return 0;
}