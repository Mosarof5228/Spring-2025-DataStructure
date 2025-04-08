/*#include<iostream>
using namespace std;
int main(){
    int arrayy[6]={1,2,3,4,5,6};
    int searchValue=4;
    for(int i=0;i<6;i++){
        if(arrayy[i]==searchValue){
            cout<<"index of "<<searchValue<<"  is: "<<i <<endl;
            break;
        }
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int arrayy[6] = {1, 2, 3, 4, 5, 6};
    int targetNumber = 30;
    bool found = false; // Flag to track if number is found

    for (int i = 0; i < 6; i++) {
        if (arrayy[i] == targetNumber) {
            cout << "The number is found at index: " << i << endl;
            found = true; // Mark as found
            break;
        }
    }

    if (!found) { // If number was not found
        cout << "Number not found" << endl;
    }

    return 0;
}
