#include <iostream>
using namespace std;

int main() {
    int size = 20;

    // Dynamically allocate memory for salares
    int *salaryArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout<< "Enter Salary for employee " <<(i + 1) << ": ";
        cin>> *(salaryArray + i); // using pointer arithmetic
    }

    // Apply increment formula
    for(int i = 0; i < size; i++){
        *(salaryArray + i) = *(salaryArray + i) + (*(salaryArray + i) / (i + 1));
    }

    // Display updated salaries
    cout<< "\nUpdated Salaries: ";
    for(int i = 0; i < size; i++) {
        cout<< *(salaryArray + i) << " ";
    }
    cout<< endl;

    // Free allocated memory
    delete [] salaryArray;

    return 0;
}