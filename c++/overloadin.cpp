#include <iostream>
using namespace std;

class Area {

public:

    void calculate(int side) {
        cout << "Square Area = " << side * side << endl;
    }

    void calculate(int length, int width) {
        cout << "Rectangle Area = " << length * width << endl;
    }

    void calculate(double radius) {
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }
};

int main() {

    Area a;

    a.calculate(4);

    a.calculate(10, 5);

    a.calculate(2.5);

    return 0;
}