#include <iostream>

// 19/02/2026
// Challenge: sum all the elements of an array by using a pointer

int sum_elements(){
    //array declaration and sum var
    int numbers[] = {7, 3, 5, 12, 4};
    int sum = 0;

    //pointer to the array first element
    int* pNumbers = numbers;

    //add the element to sum until i is 5
    for(int i = 0; i < 5; i++){
        sum += *(pNumbers + i);
    }

    return sum;
}


int main(){
    int array_sum = sum_elements();
    std::cout << array_sum << "\n";
}