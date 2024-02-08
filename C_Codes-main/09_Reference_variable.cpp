#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    int a = 10;
    int c = 20;
    int &b = a;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;
    
    int d = 35;
    b = d;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}