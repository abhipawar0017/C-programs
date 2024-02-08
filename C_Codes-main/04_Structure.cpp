#include <iostream>
#include <stdlib.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
} r1, r2;

struct complexNumber{
    int real;
    int imaginary;
};
struct studentInfo{
    int rollNumber;
    char name[30];
    char department[30];
};
int main() {
    struct rectangle r = {10, 20};
    printf("The Area of rectangle is: %d\n", r.length * r.breadth);

    r1 = {5, 7};
    printf("The Area of rectangle is: %d\n", r1.length * r1.length);

    r2 = {6, 3};
    printf("The Area of rectangle is: %d\n", r2.length * r2.breadth);
    printf("the size of rectangle taken is %d\n", sizeof(r2));
    
    struct complexNumber c;
    c.real = 10;
    c.imaginary = 20;
    printf("The complex number is: %d+i%d \n",c.real, c.imaginary);
    printf("The size of complex number is taken is %d\n", sizeof(c));

    struct studentInfo s = {420, "Shubham", "E and Tc"};
    printf("The name of student is: %s\n", s.name);
    printf("the roll number and department of student is %d and %s\n", s.rollNumber, s.department);
    printf("The size of structure of studentinfo takes is equal to %d\n", sizeof(s));
    return 0;
}