#include <iostream>

// code made in 08/01/2026


void printing(){
    int numbers[]{0,1,2,3,4};

    for (int i = 0; i < 5; i++){
        std::cout << "Number " << i+1 << std::endl;
        std::cin >> numbers[i];
    }

    std::cout << "the numbers you entered are:\n";
    for (int i = 0; i<5; i++){
        std::cout << numbers[i] << " ";
    }

}

int main(){
    std::cout << "\nDigit 5 numbers\n";

    printing();
}