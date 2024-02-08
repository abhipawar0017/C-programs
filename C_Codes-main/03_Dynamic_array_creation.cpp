#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int size;
    cout<<"Enter a size of array: ";
    cin>>size;
    int arr[size] = {10, 20, 30, 40, 50};
    for(int element: arr){
        cout<<element<<" ";
    }

    return 0;
}