#include <iostream>
using namespace std;

int main() {
    string input;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    // Count letters
    for (int i = 0; i < input.length(); ++i) {
        char ch = input[i];

        if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') {
            vowels++;
        }

        else {
            consonants++;
        }
    }

    // Output results
    std::cout << "\nLetter frequencies:\n";
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
