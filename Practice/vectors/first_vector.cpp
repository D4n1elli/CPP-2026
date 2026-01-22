#include <iostream>
#include <vector>

// First time studying about vectors
// The main difference between an array and a vector
// is that arrays have fixed sizes, while a vector is
// dynamic

int main(){

    std::vector<int> v1 = {5, 1, 3, 4};

    for (int i = 0; i<v1.size(); i++){ // print vector
        std::cout << v1[i] << " ";
    }
    std::cout << "\n";

    std::cout <<"First: " << v1.front() << "\n"; //the first element
    std::cout <<"Last: " << v1.back() << "\n"; //the last element
    std::cout <<"Total: " << v1.size() << "\n"; //the amount of elements. Unlike arrays, it's not necessary to use size in bits to calculate

    return 0;

}