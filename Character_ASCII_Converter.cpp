#include <iostream>
using namespace std;

int main() {
    char ch;
    char choice;
        do {
            cout << "\n===== ASCII VALUE CONVERTER =====" << endl;
                cout << "\nEnter a character: ";
                    cin >> ch;
            cout << "ASCII value of '" << ch << "' is: " << int(ch) << endl;
                cout << "\nDo you want to convert another character? (Y/N): ";
                    cin >> choice;
            } while (choice == 'Y' || choice == 'y');
        cout << "\nThank you for using ASCII Converter!" << endl;
    return 0;
}