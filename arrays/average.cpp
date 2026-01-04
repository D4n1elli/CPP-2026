#include <iostream>

// Code made in 04/01/2026. Starting the year's learning with arrays

int main(){
    //array declaration
    const int array_size = 5;
    int arr[array_size] = {1, 2, 3, 4, 5};

    // loop to sum all indexes
    int sum = 0;
    for (int i = 0; i < array_size; i++){
        std::cout << arr[i] << std::endl;
        sum += arr[i];
    }

    // need to make sum a float because cpp interprets int/int = int.
    float average = (float)sum/array_size;
    std::cout << average;
    return 0;
}