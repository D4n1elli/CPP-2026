#include <iostream>

//18/02/2026
//Challenge: make a function that returns the largest number's address


int* largest_num(int* a, int* b){

    // checks what's inside the 2 variables addresses
    if(*a > *b){

        //returns only the address
        return a;
    }

    else if (*b > *a){
        return b;
    }

    return nullptr; // returns a null pointer if both are false (values are equal)
}


int main(){

    // variable declaration
    int number1, number2;

    // numbers input
    std::cout << "Type 2 numbers to know which one is the largest!\n";
    std::cout << "Number 1: ";
    std::cin >> number1; std::cout << "\n";

    std::cout << "Number 2: ";
    std::cin >> number2; std::cout << "\n";


    int* pLargest_address = largest_num(&number1, &number2);

    // cout what's inside the addres the pointer holds
    if (pLargest_address == nullptr){
        std::cout << "The numbers are equal\n";
    }
    else{
        std::cout << *pLargest_address << "\n";
    }
}