#include <iostream>
#include <stdlib.h>

using namespace std;
void SwapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;
    printf("Before swaping\n");
    cout<<a<<" "<<b<<endl;
    SwapNumbers(a, b);
    printf("After swaping\n");
    cout<<a<<" "<<b<<endl;


}