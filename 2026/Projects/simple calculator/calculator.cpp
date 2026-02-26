#include <iostream>

// 28/01/2026

// user selects the operation and the function returns it
int operation_select(){
    int operation;
    const int max_operations = 4;


    while(true){
        std::cout << "Operation:\n";

        std::cin >> operation;
        std::cout << "\n";

        if(operation < 1 || operation > max_operations){
            std::cout << "Please select a valid operation\n";
            continue;
        }
        break;
    }

    return operation;
}


// gets the user input for the 2 numbers and returns the operation result
double input_and_calculating(){
    double number_1; double number_2;
    int operation;

    while(true){
        // number 1 input
        std::cout << "First number: ";
        std::cin >> number_1;
        std::cout << "\n";

        operation = operation_select(); // operation selecting function call

        // number 2 input
        std::cout << "Second number: ";
        std::cin >> number_2;
        std::cout << "\n";

        // code loops if there's division by 0
        if(number_2 == 0 && operation == 4){
            std::cout << "Cannot divide by 0!\n";
            continue;
        }
        break;
    }  

    if (operation == 1){return number_1 + number_2;}
    else if (operation == 2){return number_1 - number_2;}
    else if (operation == 3){return number_1 * number_2;}
    else if (operation == 4){return number_1 / number_2;}
    return 0;
}


int main(){
    std::cout << "\n--Calculator--\n";
    std::cout << "Operations available:\n1: +, 2: -, 3: *, 4: /\n";

    double result = input_and_calculating();
    std::cout << result;
}