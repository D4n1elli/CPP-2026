#include <iostream>

// 18/02/2026
// Challenge: swap two variables by using their address

void swap(int* a, int* b){

    // variable that holds what's on a address
    int temp = *a;

    // a becomes b
    *a = *b;

    // b becomes a
    *b = temp;

}

int main(){

    // variable declarations
    int first = 1;
    int second = 2;

    // display before swap
    std::cout << "Variables before swapping: " << first << ", " << second << "\n";

    // swap function call
    swap(&first, &second);

    std::cout << "Variables after swapping: " << first << ", " << second << "\n";

    return 0;
}