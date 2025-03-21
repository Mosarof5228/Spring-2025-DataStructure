#include<iostream>
using namespace std;
int main(){
    int myArray[6] = {1, 2, 3, 4, 5, 6};
    int left, right, middle;
    left = 0;
    right = 5;
    int data = 6;  // Searching for 4

    while (left <= right) {
        middle = (left + right) / 2; // Recalculate middle in each iteration

        if (data == myArray[middle]) {
            cout << "Target Value is found at position: " << middle << endl;
            return 0;
        }
        else if (data > myArray[middle]) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    cout << "Item Not found" << endl;
    return 0;
}
