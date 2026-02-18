#include <iostream>

void swap(int* a, int* b){

    int temp = *a;
    *a = *b;
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