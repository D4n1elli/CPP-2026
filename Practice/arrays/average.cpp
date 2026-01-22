#include <iostream>

// Code made in 04/01/2026. Starting the year's learning with arrays

int main(){
    //cout and cin (size)
    std::cout << "\nDigit a determined amount of numbers to know their average\n";
    int array_size;
    while (true){
        std::cout << "Amount of numbers: ";
        std::cin >> array_size;
        if(array_size <= 1){std::cout << "Enter a number above 1.\n"; continue;}
        else {break;}
    }

    // loop to get the indexes and sum them
    int sum = 0;
    int numbers[array_size]{};
    for (int i = 0; i < array_size; i++){
        std::cout << "Number " << i+1 << std::endl;
        std::cin >> numbers[i];
        sum += numbers[i];
    }


    // need to make sum a float because cpp interprets int/int = int.
    float average = (float)sum/array_size;
    std::cout << average;
    return 0;
}
