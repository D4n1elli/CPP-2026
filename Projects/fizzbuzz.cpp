#include <iostream>

// calculates and outputs the fizzbuzz
void fizzbuzz_calculate(){

    for(int i = 1; i<=100; i++){

        if(i % 3 == 0 && i % 5 == 0){ // if is divisible by 3 and 5
            std::cout << "fizzbuzz   ";
        }
        else if (i % 5 == 0){ // by 5
            std::cout << "buzz   ";
        }
        else if(i % 3 == 0){ // by 3
            std::cout << "fizz   ";
        }
        else{
            std::cout << i << "   ";
        }

        // breaks a line each 10 numbers
        if (i % 10 == 0){
            std::cout << "\n";
        }
    }
}

int main(){
    std::cout << "\n--Fizzbuzz challenge--\nPrint every number from 1 to 100\n";
    std::cout << "When a number is multiple of 3, print fizz instead\n";
    std::cout << "When it's multiple of 5, print buzz\n";
    std::cout << "When it's multiple of both 3 and 5, print fizzbuzz\n";
    fizzbuzz_calculate();
}