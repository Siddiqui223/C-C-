/*
 * TOPIC: Input and Output in C++
 * -----------------------------------
 * cout -> used to print (output) data     : cout << variable;
 * cin  -> used to read (input) data       : cin >> variable;
 *
 * Notice: unlike C's scanf, cin does NOT need the & (address-of) operator.
 */

#include <iostream>
using namespace std;

int main() {
    int age;
    float marks;
    string name;   // string type from <string> (auto-included via iostream in most compilers)

    // ---- Taking input ----
    cout << "Enter your name: ";
    cin >> name;                 // reads a single word (stops at space)

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    // ---- Multiple inputs can also be taken in ONE line ----
    // Example: cin >> age >> marks;

    // ---- Displaying the collected data ----
    cout << "\n--- Your Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}
