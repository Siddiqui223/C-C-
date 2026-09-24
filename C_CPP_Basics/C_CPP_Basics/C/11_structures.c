/*
 * TOPIC: Structures in C
 * ---------------------------
 * A structure (struct) lets us group DIFFERENT data types together
 * under one single name. Useful for representing a real-world "object"
 * like a Student, Book, or Employee.
 */

#include <stdio.h>
#include <string.h>

// ---- Defining a structure ----
struct Student {
    char name[30];
    int age;
    float marks;
};   // don't forget the semicolon here!

// A function that takes a struct as a parameter and prints its details
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    // ---- Creating (declaring) a structure variable ----
    struct Student s1;

    // ---- Assigning values to structure members using dot (.) operator ----
    strcpy(s1.name, "Ravi");
    s1.age = 20;
    s1.marks = 88.5;

    // ---- Accessing structure members ----
    printf("Student Details:\n");
    printStudent(s1);

    // ---- Structure can also be initialized directly ----
    struct Student s2 = {"Meera", 22, 91.2};
    printf("\nAnother Student:\n");
    printStudent(s2);

    return 0;
}
