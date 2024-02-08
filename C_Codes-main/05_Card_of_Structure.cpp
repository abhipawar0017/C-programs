#include <iostream>
#include <stdlib.h>
using namespace std;

struct cards{
    int face;
    int shape;
    int color;
};

int main() {
    struct cards deck[52];
    deck[0].face = 0;
    deck[0].shape = 1;
    deck[0].color = 0;
    cout<<"The Face number of deck card is: "<<deck[0].face<<endl;
    cout<<"The Shape of card is "<<deck[0].shape<<endl;
    cout<<"The Colour of card is "<<deck[0].color<<endl;

    return 0;
}