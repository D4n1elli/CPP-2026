#include <iostream>
#include <string>

int count_syllables(std::string word){

    char syllables[] = {'a', 'e', 'i', 'o', 'u'};
    int syllables_total = 0;

    // loop thru the string
    for(int i = 0; i < word.length(); i++){

        // check if i letter is in syllabes
        for(int x = 0; x < word.length(); x++){

            // if i letter is a syllabe, add 1 to syllabes_total
            if (word[i] == syllables[x]){
                syllables_total++;
                break;
            }
        }

    }
    return syllables_total;
}



int main(){
    std::cout << "\n--Syllables counter--\n\n";
    // std::cin stops reading the input at the first space
    // to fix this, we need to use std::getline()
    std::string text;
    std::cout << "Input a text to find out how many syllables it has: ";
    std::getline(std::cin, text);
    std::cout << "\n";
    

    int syllables = count_syllables(text);

    if(syllables == 0){
        std::cout << "There are no syllabes in the text.\n";
    }
    else{
        std::cout << "The text has "<< syllables << " syllabes.\n";
    }

}