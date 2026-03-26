#include <iostream>



int input_options(int min, int max){
    std::cout << "Option: \n";

    int option;
    while(true){
        std::cin >> option;

        if (option > max || option < min){
            std::cout << "Type a valid option.\n";
            continue;
        }
        else{
            break;
        }
    }

    return option;
}

double temperature(){
    std::cout << "What unit do you have and want to convert?\n";
    std::cout << "1 - Celsius\n";
    std::cout << "2 - Fahrenheit\n";
    std::cout << "3 - Kelvin\n\n";

    int unit_to_convert = input_options(1, 3);

    std::cout << "Value: \n";
    double to_convert_value;
    std::cin >> to_convert_value;
    std::cout << "\n";

    std::cout << "Now what unit do you want to convert it to?\n";
    int unit_result = input_options(1, 3);


    // check if both are equal
    if (unit_to_convert == unit_result){
        return to_convert_value;
    }
 
    // convert celsius to x
    else if(unit_to_convert == 1){
        // to fahrenheit
        if (unit_result == 2){
            return to_convert_value*1.8+32;
        }
        // to kelvin
        else if (unit_result == 3){
            return to_convert_value+273.15;
        }
    }
 
    // convert fahrenheit to x
    else if (unit_to_convert == 2){
        // to celcius
        if(unit_result == 1){
            return (to_convert_value-32) / 1.8;
        }
        // to kelvin
        else if(unit_result == 3){
            return (to_convert_value-32)/1.8 + 273.15;
        }
    }

    // convert kelvin to x
    else if (unit_to_convert == 3){
        // to celsius
        if (unit_result == 1){
            return to_convert_value - 273.15;
        }
        // to fahrenheit
        else if (unit_result == 2){
            return (to_convert_value - 273.15) * 1.8 + 32;
        }
    }
    return 0;

}

double distance(){
    std::cout << "What unit do you have and want to convert?\n";
    std::cout << "1 - Meters\n";
    std::cout << "2 - Kilometers\n";
    std::cout << "3 - Feet\n";
    std::cout << "4 - Miles\n\n";

    int unit_to_convert = input_options(1, 4);

    std::cout << "Value: \n";
    double to_convert_value;
    std::cin >> to_convert_value;
    std::cout << "\n";

    std::cout << "Now what unit do you want to convert it to?\n";
    int unit_result = input_options(1, 4);


    // check if both are equal
    if (unit_to_convert == unit_result){
        return to_convert_value;
    }
 
    // convert meters to x
    else if(unit_to_convert == 1){
        // to kilometers
        if (unit_result == 2){
            return to_convert_value/1000;
        }
        // to feet
        else if (unit_result == 3){
            return to_convert_value*3.28084;
        }
        // to miles
        else if (unit_result == 4){
            return to_convert_value/1609.34;
        }
    }

    // convert kilometers to x
    else if(unit_to_convert == 2){
        // to meters
        if (unit_result == 1){
            return to_convert_value*1000;
        }
        // to feet
        else if (unit_result == 3){
            return to_convert_value*3280.84;
        }
        // to miles
        else if (unit_result == 4){
            return to_convert_value*0.621371;
        }
    }

    // convert feet to x
    else if(unit_to_convert == 3){
        // to meters
        if (unit_result == 1){
            return to_convert_value/3.28084;
        }
        // to kilometers
        else if (unit_result == 2){
            return to_convert_value*0.0003048;
        }
        // to miles
        else if (unit_result == 4){
            return to_convert_value/5280;
        }
    }

    // convert miles to x
    else if(unit_to_convert == 4){
        // to meters
        if (unit_result == 1){
            return to_convert_value* 1609.344;
        }
        // to kilometers
        else if (unit_result == 2){
            return to_convert_value*1.609344;
        }
        // to feet
        else if (unit_result == 3){
            return to_convert_value*5280;
        }
    }
    return 0;
}


int main(){
// menu
    std::cout << "\n-- Units converter --\n\n";

    // max of the options avaliable on the menu. Modify if you add or remove options
    const int max_options = 2;

    int result;
    while (true){
        // menu
        std::cout << "--Menu--\n\n";

        std::cout << "0 - Quit\n";
        std::cout << "1 - Temperature\n";
        std::cout << "2 - Distance\n\n"; 
        
        
        int option = input_options(0, max_options);

        switch(option){
            case 0:
                return 0;
            case 1:
                result = temperature();
                break;
            case 2:
                result = distance();
                break;

        }
        std::cout << "Your result is: " << result << "\n\n\n";
    }
    return 0;
}