#include <iostream>

// Code made in 09/01/2026!

bool is_on_array(int number){
    int numbers_array[]{1, 5, 6, 9, 11, 17, 19};
    int size = sizeof(numbers_array) / sizeof(numbers_array[0]);


    for(int i = 0; i<size; i++){
        if (number == numbers_array[i]){
            return true;
        }
    }
    return false;
}

int main(){
    std::cout << "\nType a number between 1 and 20 to know if it is on my array or not\n";
    std::cout << "Type 0 to finish the program!\n\n";
    int number;

    while (true){
        std::cout << "Number: "; std::cin >> number; std::cout << "\n";
        if (number == 0){break;}
        else if (number < 0 || number > 20){std::cout << "Invalid!\n"; continue;}
        else {
            bool onarray = is_on_array(number);
            if (onarray == true){std::cout << "Yes!\n";}
            else{std::cout << "Nah!\n";}
        }
    }
    std::cout << "Finishing...\n";
}