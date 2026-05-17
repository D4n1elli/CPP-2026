#include <iostream>

// challenge: print the sum of all multiples of 3 or/and 5 under 1000.

int multiples_sum(int limit){
    // sum of all multiples
    int sum = 0;

    // check each number under limit
    for(int i = 3; i<=limit; i++){
        // if divisible by 3 or 5, add to sum
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    return sum;
}



int main(){
    int limit = 1000;
    int finalsum = multiples_sum(limit);

    std::cout << "The sum of all multiples of 3 or/and 5 under " << limit << " is " << finalsum << "\n";

}