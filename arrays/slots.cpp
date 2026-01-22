#include <iostream>

// code made in 09/01/2026

void crescent_order(){       //     0           1         2         3           4
    std::string garage_slots[]={"red car", "blue car", "empty", "black car", "empty"};

    int slot = 0;
    while (true){
        std::cout << "Slot: ";
        std::cin >> slot;

        if (slot == 0){break;}
        else if (slot < 1 || slot > 5){std::cout << "Type a valid slot\n"; continue;}
        else{
            std::cout << garage_slots[slot-1] << std::endl;
        }
    }

}





int main(){
    std::cout << "\nA garage has 5 parking slots. Insert the slot number to know what's in it.\n\n";
    std::cout << "Type 0 to finish the program.\n";

    crescent_order();
    std::cout << "Finishing...\n";
}