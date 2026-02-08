#include <iostream>

// 08/02/2026

int main(){
    
    // pointers are variables that store a memory address of another variable
    // & = address-of operator
    // * = dereference operator

    int num1 = 5;

    // num1 pointer
    int* pNum1 = &num1;

    std::cout << "Number 1: " << num1 << "\n";
    std::cout << "The address of number 1 is: " << pNum1 << ", this is where it lives on the pc memory\n";


    // this reads whats inside pNum1 and copies to another variable
    // think of it like taking a photo of a number inside a house, and then
    // placing the same number on another house
    // if house1 change their number house2 wont know, but will store its previous num
    int num2 = *pNum1;


    std::cout << "The value of num2 is equal to what's inside num1 address, which is " << num2;

}