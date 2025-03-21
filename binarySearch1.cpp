#include <iostream>
using namespace std;

int main() {
    int myArray[6] = {1, 2, 3, 4, 5, 6};
    int left = 0, right = 5, middle;  // Initialize left and right
    int targetData = 6;

    while (left <= right) {
        middle = (left + right) / 2;
        
        if (targetData == myArray[middle]) {
            cout << "The position of the data is: " << middle << endl;
            return 0;
        } 
        else if (targetData > myArray[middle]) {
            left = middle + 1;
        } 
        else {
            right = middle - 1;
        }
    }

    cout << "Data not found" << endl; // Fixed spelling mistake

    return 0;
}
