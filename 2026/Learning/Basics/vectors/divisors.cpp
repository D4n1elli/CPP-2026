#include <iostream>
#include <vector>

// 30/01/2026

void divisors_calculating(int number){

    std::vector <int> divisors;
    
    // loop to store the divisors
    for(int i = 1; i <= number; i++){
        if (number%i == 0){
            divisors.push_back(i);
        }
    }

    // output the divisors
    std::cout << "The divisors of " << number << " are:\n";
    for(int i = 0; i <= divisors.size() - 1; i++){
        std::cout << divisors[i] << " ";
    }
    std::cout << "\n";

}



int main(){
    std::cout << "\n--Divisors Calculator--\n";
    std::cout << "Type 0 to finish the program\n\n";

    while (true){
        int number;

        std::cout << "Number: ";
        std::cin >> number;
        std::cout << "\n";

        if (number == 0){break;}

        divisors_calculating(number);
    }
    std::cout << "Finishing...\n";
}