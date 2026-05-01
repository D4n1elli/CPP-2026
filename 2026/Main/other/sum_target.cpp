#include <iostream>


void has_combinations(int arr[], int size, int target){
    bool possible = false;

    // loops through the main numbers array
    for(int i = 0; i < size; i++){
        // combinates i with the rest of the numbers
        for(int x = i+1; x< size; x++){
            // check if combination is equal to target
            if (arr[i] + arr[x] == target){
                std::cout << arr[i] << " + " << arr[x] << "\n";
                possible = true;
            }
        }
    }
    if (possible == false){
        std::cout << "There is no pair of numbers in the array that sum up to this target.\n";
    }
}


int main(){
    std::cout << "\n-Sum finder-\n\n";

    // start variables
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);

    // display to user the numbers
    std::cout << "Array of numbers:\n";
    for(int i = 0; i< numbers_size; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    // input target
    int target;
    std::cout << "What number to you want to get?\nNumber: ";
    std::cin >> target;
    std::cout << "\n";

    std::cout << "Possible combinations:\n";
    has_combinations(numbers, numbers_size, target);
}