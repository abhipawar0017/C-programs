#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int length = 0;
    int breadth = 0;
    printf("Enter a length:");
    scanf("%d", &length);
    printf("Enter a breadth:");
    scanf("%d", &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("The area of rectangle is: %d\n", area);
    printf("The perimeter of rectangle is: %d\n", perimeter);

    return 0;
}