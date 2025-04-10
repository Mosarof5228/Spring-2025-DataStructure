#include<iostream>
using namespace std;

int main() {
    int myArray[6] = {2, 3, 1, 5, 20, 200};
    int targetNumber = 3;
    bool found=false;
    for(int i=0;i<6;i++){
        if(myArray[i]==targetNumber){
            cout<<"target Number "<<targetNumber <<" index is: "<<i;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"target number"<<targetNumber <<" is not found";
    }
   
}
