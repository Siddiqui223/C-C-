/*
 * TOPIC: Loops in C++
 * -----------------------
 * Same as C: for, while, do-while, break, continue
 * PLUS: range-based for loop (C++11) - simpler way to loop through arrays
 */

#include <iostream>
using namespace std;

int main() {
    // ---- for loop ----
    cout << "For loop (1 to 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // ---- while loop ----
    cout << "\nWhile loop (5 to 1): ";
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << endl;

    // ---- do-while loop ----
    cout << "\nDo-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 3);
    cout << endl;

    // ---- break and continue ----
    cout << "\nBreak example (stop at 4): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 4) break;
        cout << i << " ";
    }

    cout << "\nContinue example (skip 3): ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue;
        cout << i << " ";
    }
    cout << endl;

    // ---- Range-based for loop (C++11) : cleanest way to loop over arrays ----
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "\nRange-based for loop: ";
    for (int num : numbers) {   // reads as "for each num in numbers"
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
