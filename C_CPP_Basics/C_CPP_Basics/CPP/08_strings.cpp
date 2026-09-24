/*
 * TOPIC: Strings in C++
 * ---------------------------
 * Unlike C (char arrays), C++ has a built-in "string" class from
 * the <string> library which is much easier and safer to use.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    // ---- Declaring a string ----
    string name = "Alice";
    cout << "Name: " << name << endl;

    // ---- Getting the length ----
    cout << "Length: " << name.length() << endl;

    // ---- Concatenation using + operator (much easier than strcat in C) ----
    string greeting = "Hello, " + name;
    cout << "Greeting: " << greeting << endl;

    // ---- Accessing individual characters using [] ----
    cout << "First character: " << name[0] << endl;

    // ---- Comparing strings using == (much easier than strcmp in C) ----
    if (name == "Alice") {
        cout << "Names match!" << endl;
    }

    // ---- substr(startIndex, length): extracts part of a string ----
    string sub = greeting.substr(7, 5);   // starts at index 7, takes 5 characters
    cout << "Substring: " << sub << endl;

    // ---- find(): searches for a substring, returns its starting index ----
    int position = greeting.find("Alice");
    cout << "'Alice' found at index: " << position << endl;

    return 0;
}
