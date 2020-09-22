//Clayton Arndt
//Homework 2
//9/20/20
//CS 201

#include <iostream>

using std::cout;
using std::endl;

int main(){
int square[1000] = {1}; //The base that the rest of it is based on
int count = 1;

    for(count=1; square[count] <= 1000; count++)//also works with just count instead of count=1
    square[count] = square[count-1]*2;
    cout<< "It would take " <<count <<" squares to reach 1000 grains\n";

    for(count=1; square[count] <= 1000000; count++)
        square[count] = square[count-1]*2;
    cout<< "It would take " <<count <<" squares to reach 1,000,000 grains\n";

    for(count=1; square[count] <= 1000000000; count++)
        square[count] = square[count-1]*2;
    cout<< "It would take " <<count <<" squares to reach 1,000,000,000 grains\n";

    return 0;

}