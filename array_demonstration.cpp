//============================================
// Name        : array_demonstration.cpp
// Author      : Noah Allan Ertz (NAE)
// Email       : naertz@dmacc.edu
// Date        : 2021-09-12
// Description : Demonstrates use of an array.
//============================================

#include <array>
#include <iostream>

using namespace std;

int main() {
    /** 1. Describe any mistake(s) in the following code segment.
     * const int SIZE = 5;
     * array<int, SIZE> items;
     * items = 5;
     */

    /** Answer:
     * One cannot simply assign a literal to an array instance.
     * Arrays have no viable overload for '=' assignments.
     * One needs to assign an element to an array like so: items[0] = 5;
     */

    /** 2. Describe any mistake(s) in the following code segment.
     * const int SIZE = 5;
     * array<string, SIZE> items = {};
     * items[SIZE] = "Book";
     */

    /** Answer:
     * Because SIZE is 5, the indexes for the array go from 0 to 4.
     * It is not possible to assign "Book" to an index of 5 for the array because it is not allocated/available.
     */

    /** 3. Describe any mistake(s) in the following code segment.
     * int SIZE = 10;
     * array<double, SIZE> items = {};
     * items = 10.5;
     */

    /** Answer:
     * The array template must have a constant expression for its second argument.
     * It is also not possible to assign an array with a literal.
     * To assign the first element of the array, one would do this instead: items[0] = 10.5;
     */

    // 4. Complete the following steps in code.

    // Declare an array of size 9 containing doubles.

    const int SIZE = 9;
    array<double, SIZE> items;

    // Prompt the user to enter 9 doubles and store each into the elements of the array. Hint: you can use cin to store input directly into an indexed array.

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter a double: " << flush;
        cin >> items[i];
    }

    // Display the first, fifth (statistically the median or "middle" element), and last element of the array. You must use the array to receive credit.

    cout << "First double: " << items.front() << endl;

    int middleIndex     = 0;
    int lowMiddleIndex  = 0;
    int highMiddleIndex = 0;

    if (SIZE / 2 != 0) { // Odd size
        middleIndex = SIZE / 2;
        cout << "Middle double: " << items.at(middleIndex) << endl;
    } else { // Even size
        lowMiddleIndex  = (SIZE / 2) - 1;
        highMiddleIndex = (SIZE / 2);
        cout << "Low Middle double: " << items.at(lowMiddleIndex) << endl;
        cout << "High Middle double: " << items.at(highMiddleIndex) << endl;
    }

    cout << "Last double: " << items.back() << endl;

    return 0;
}
