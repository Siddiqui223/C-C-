/*
 * TOPIC: Pointers and References in C++
 * --------------------------------------------
 * Pointers work the same as in C.
 * References are a C++-only feature: an "alias" (another name) for
 * an existing variable. Unlike pointers, references CANNOT be null
 * and CANNOT be changed to refer to a different variable later.
 */

#include <iostream>
using namespace std;

int main() {
    // ---- Pointers (same as C) ----
    int num = 25;
    int *ptr = &num;    // ptr stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Value via pointer (*ptr): " << *ptr << endl;

    *ptr = 50;           // changes num through the pointer
    cout << "After *ptr = 50, num = " << num << endl;

    // ---- References: an alias/nickname for a variable ----
    int original = 100;
    int &ref = original;   // 'ref' is now just another name for 'original'

    cout << "\noriginal = " << original << ", ref = " << ref << endl;

    ref = 200;   // changing ref changes original too (they are the SAME variable)
    cout << "After ref = 200, original = " << original << endl;

    return 0;
}
