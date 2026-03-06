#include <iostream>
using namespace std;

// code made in 28/12/2025, first time learning about arrays in CPP.
// I have a very vague understanding about it since I only used it in Lua a few years ago
// but i remember a little about it

// array is a data structure that can hold multiple values
// values are acessed by an index number
// like a variable that holds multiple values

int main(){
    string cars_in_garage[] = {"red car", "blue car", "magenta car", "yellow car", "black car"};

    cout << "There are 5 cars in the garage. Which garage spot do you want to acess?\n";
    int garage_index = 0;
    cout << "Number: "; cin >> garage_index; cout << endl;

    cout << "In the " << garage_index << " spot, there's a " << cars_in_garage[garage_index-1];
    return 0;
}