/*
 * TOPIC: Classes and Objects (Intro to OOP) in C++
 * --------------------------------------------------------
 * A class is a blueprint for creating objects. It groups DATA
 * (attributes/variables) and BEHAVIOR (functions/methods) together.
 * An object is an actual INSTANCE created from a class.
 *
 * Access Specifiers:
 *   private -> members can only be accessed INSIDE the class (default)
 *   public  -> members can be accessed from OUTSIDE the class too
 */

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    // private members: hidden from outside, protects the data
    string brand;
    int speed;

public:
    // ---- Constructor: a special function that runs AUTOMATICALLY
    // when an object is created. Used to set initial values ----
    Car(string carBrand, int startSpeed) {
        brand = carBrand;
        speed = startSpeed;
        cout << "A new car object was created!" << endl;
    }

    // ---- Member function to change speed safely ----
    void accelerate(int amount) {
        speed += amount;
    }

    // ---- Member function to display car details ----
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // ---- Creating Objects (Instances of the Car class) ----
    Car car1("Toyota", 60);   // constructor runs automatically here
    Car car2("Honda", 80);

    // ---- Using the objects' public functions ----
    car1.showDetails();
    car2.showDetails();

    // ---- Modifying state through a public method ----
    car1.accelerate(20);
    cout << "\nAfter accelerating car1:" << endl;
    car1.showDetails();

    return 0;
}
