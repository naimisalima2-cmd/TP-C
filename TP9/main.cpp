#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Convert to uppercase
    for (char &c : input) {
        c = toupper(c);
    }

    cout << "Uppercase: " << input << endl;

    // Convert to lowercase
    for (char &c : input) {
        c = tolower(c);
    }

    cout << "Lowercase: " << input << endl;

    return 0;
}