#include <iostream>

// Code made in 09/01/2026

void numbers_counting(){
    // array declaration
    int numbers[]={0, 0, 0, 0, 5, 5, 5, 10, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // counting how many times 0 5 and 10 appears
    int zeros = 0; int fives = 0; int tens = 0;

    for(int i = 0; i<size; i++){
        if (numbers[i] == 0){zeros++;}
        else if (numbers[i] == 5){fives++;}
        else if (numbers[i] == 10){tens++;}
    }

    // printing array
    for(int i = 0; i<size; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\nIn the array, there are "<< zeros << " zeros, "<<fives<<" fives, and "<< tens<< " tens!\n";

}

int main(){
    numbers_counting();
}