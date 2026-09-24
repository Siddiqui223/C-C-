/*
 * TOPIC: Structures in C++
 * ------------------------------
 * Structures work like in C, but C++ structs can ALSO have functions
 * (methods) inside them, unlike C. In C++, struct members are
 * "public" by default (same as class, except class defaults to private).
 */

#include <iostream>
#include <string>
using namespace std;

// ---- Defining a structure with a member function ----
struct Student {
    string name;
    int age;
    float marks;

    // Member function INSIDE the struct - prints the student's details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // ---- Creating and initializing a structure variable ----
    Student s1;
    s1.name = "Ravi";
    s1.age = 20;
    s1.marks = 88.5;

    cout << "Student 1 Details:" << endl;
    s1.display();     // calling the function using dot operator

    // ---- Direct initialization ----
    Student s2 = {"Meera", 22, 91.2};
    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}
