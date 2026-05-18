#include <iostream>

// Challenge: given an array, return true if there are more odd numbers than
// even numbers, otherwise return false


bool odds_count(int nums[], int size){
    int odds = 0;
    
    // loop through the array
    for(int i = 0; i < size; i++){
        // stop if odds number is already more than half
        if(size-odds < odds){
            break;
        }
        // if i is not even, odd++
        if(nums[i] % 2 != 0){
            odds++;
        }
    }


    if(size - odds < odds){
        return true;
    }
    else{
        return false;
    }

}


int main(){
    int numbers[] = {3, 3, 3, 4, 4, 4};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    bool has_more_odds = odds_count(numbers, size);
    
    if(has_more_odds == true){
        std::cout << "The given array contains more odd numbers than even numbers.\n";
    }
    else{
        std::cout << "The given array does not contain more odd numbers than even numbers.\n";
    }

}