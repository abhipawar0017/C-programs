#include <iostream>
#include <stdlib.h>
using namespace std;

struct array {
    int arr [5];
    int size;
};
int changeArray(struct array &p) {
    p.arr[0] = 5;
    p.arr[1] = 10;
    p.arr[2] = 30;
}
int main()
{   
    struct array p = {{1, 2, 3, 4, 5}, 5};
    for(int i=0; i<5; i++) {
        cout<<p.arr[i]<<" ";
    }
    printf("\n");
    changeArray(p);

    for(int i=0; i<5; i++) {
        cout<<p.arr[i]<<" ";
    }

    
    return 0;
}