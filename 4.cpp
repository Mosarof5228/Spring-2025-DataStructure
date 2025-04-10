#include<iostream>
using namespace std;

int main() {
    int myArray[6] = {3, 5, 8, 10, 15, 100};
    int left = 0, right = 5, middle, data = 50;

    while (left <= right) {
        middle = (left + right) / 2;
        if (data == myArray[middle]) {
            cout << "Data index number is: " << middle << endl;
            return 0;
        }
        else if (data > myArray[middle]) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }

    cout << "Data not found in this array" << endl;
    return 0;
}
