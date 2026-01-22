#include <iostream>

// Code made in 13/01/2026, struggled a little to do it

void reverse_array(){
    //original array declaration
    int original[]={0,1,2,3,4};
    int size = sizeof(original) / sizeof(original[0]); // still didnt 100% understood how it works

    // cout original array
    for (int i = 0; i<size; i++){
        std::cout << original[i] << " ";
    }

    int reverse[]={0,0,0,0,0};

    int r_i = 0; //reverse index counter
    for (int i = size-1; i>=0; i--){
        reverse[r_i] = original[i];
        r_i++;
    }

    // cout reversed array
    std::cout << "\n";
    for (int i = 0; i<size; i++){
        std::cout << reverse[i] << " ";
    }
}


int main(){
    reverse_array();
}