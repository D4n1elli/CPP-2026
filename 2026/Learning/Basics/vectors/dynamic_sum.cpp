#include <iostream>
#include <vector>

// Made in 26/01/2026

int input_loop(){
    std::vector<int> user_numbers;
    
    while(true){
        std::cout << "Number " << user_numbers.size() + 1 << std::endl;

        int number;
        std::cin >> number;

        // stops storing if number is 0
        if (number == 0){break;}

        // stores input in the vector
        user_numbers.push_back(number);
    }

    // This is done to practice iterating through a vector and using its elements,
    // rather than summing as the user types.
    int sum = 0;
    for (int i = 0; i < user_numbers.size(); i++){
        sum += user_numbers[i];
    }

    //result output
    std::cout << "The sum of all the " << user_numbers.size() << " numbers is " << sum << "\n";
    std::cout << "Again? 1 for true, 0 for false\n";

    int answer; std::cin >> answer;

    while (answer < 0 || answer > 1){ //validation
        std::cout << "Invalid.\n";
        std::cin >> answer;
    }
    return answer;
    
}

int main(){
    std::cout<< "\nEnter numbers to calculate their sum!\nDigit 0 to stop\n\n";

    int again = input_loop();
    while(again != 0){
        again = input_loop();
    }
}
