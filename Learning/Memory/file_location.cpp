#include <iostream>

int main(){

    int file1 = 123;

    // pointer of file1
    int* pFile1_Location = &file1;

    std::cout << "\nThe file 1 is located in the room: " <<pFile1_Location << "\n";
    std::cout << "It's value is " << file1 << "\n";

    // file1 copy (copies the value of the variable)
    int file1_copy = *pFile1_Location;

    std::cout << "There is also a copy of file 1 in " << &file1_copy << "\n";
    std::cout << "It's value is " << file1_copy << "\n";

    // alterating file 1
    file1 = 321;
    std::cout << "File 1 was altered to " << file1 << "\n";
    std::cout << "It's copy in room " << &file1_copy << " is still " << file1_copy << "\n";

}