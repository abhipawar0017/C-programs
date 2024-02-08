#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int a = 10;
    // Pointer variable declearation
    int *ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %d and ptr storing address is %d\n", &a, ptr);
    printf("The value of ptr or address of a is %d\n", ptr);
    printf("dereferancing of ptr is %d\n", *ptr);

    return 0;
}