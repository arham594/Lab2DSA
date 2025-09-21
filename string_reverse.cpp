#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout << "Enter size of string: ";
    cin >> size;

    char *str = new char[size + 1]; // allocate memory

    cout << "Enter string: ";
    cin >> str; // simple input (no spaces allowed)

    int len = strlen(str);

    // reverse string
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    delete [] str; // free memory

    return 0;
}
