#include <iostream>

void pointer_to_array(){

    int numbers[5] = {1, 2, 3, 4, 5};

    // stores the address of the first element
    int* pNumbers = numbers;

    // prints 3 indexes past the first element
    std::cout << *(pNumbers + 3) << "\n";

    // important: different from the last line,
    // this dereferences the first element then add 2
    std::cout << *(pNumbers) + 2 << "\n";
}



int main(){
    pointer_to_array();
}