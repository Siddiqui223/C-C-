/*
 * TOPIC: Arrays in C++
 * -------------------------
 * Same concept as C: a collection of same-type elements in contiguous
 * memory, index starts at 0. C++ also offers std::vector (a dynamic,
 * resizable array) which we briefly introduce here too.
 */

#include <iostream>
#include <vector>     // needed for std::vector
using namespace std;

int main() {
    // ---- 1D Array ----
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    // ---- 2D Array ----
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "\n2D Array (Matrix):" << endl;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // ---- vector: like an array but can GROW or SHRINK in size ----
    vector<int> scores = {90, 85, 77};
    scores.push_back(95);   // adds a new element to the end

    cout << "\nVector elements:" << endl;
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;
    cout << "Vector size: " << scores.size() << endl;

    return 0;
}
