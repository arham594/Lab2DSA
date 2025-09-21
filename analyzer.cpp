#include <iostream>
using namespace std;

// Function to analyze pointer
void analyze_pointer(int *ptr) {
    // Print the memory location
    cout << "The memory location that the pointer points to is: " << ptr << endl;

    // Print the value stored at that address
    cout << "The value of the integer being pointed to is: " << *ptr << endl;
}

int main() {
  
    int iValue = 15; // a stack variable
    analyze_pointer(&iValue);  // pass the address of stack variable

    cout << endl;

    int *heapValue = new int;  // allocate memory on the heap
    *heapValue = 20;           // assign value

    analyze_pointer(heapValue);  // pass pointer to heap variable

    // Free allocated memory
    delete heapValue;

    return 0;
}
