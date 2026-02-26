#include <iostream>

void double_number(int* pX){
    *pX = *pX * 2;
}


int main(){
    int number;
    std::cout << "Type a number to double it:\n";
    std::cin >> number;
    std::cout << "\n";

    int* pNumber = &number;
    double_number(pNumber);

    std::cout << number;
}