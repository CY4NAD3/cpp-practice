#include <iostream>
using namespace std;

int main() {

    char letter;
    cout << "Please enter your letter: ";
    cin >> letter;

    letter = tolower(letter); 
    switch (letter) {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        
            cout << "The letter is a vowel";
            break;

        default:
            cout << "The letter is a consonant";
            break;
    }

    return 0;
}
