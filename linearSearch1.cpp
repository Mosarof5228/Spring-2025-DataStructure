#include<iostream>
using namespace std;
int main(){
    int myArray[6]={1,3,5,2,6,4};
    int targetValue=4;
    for(int i=0;i<6;i++){
        if(myArray[i]==targetValue){
            cout<<" index of "<<targetValue<<" is: "<<i<<endl;
            break;
        }
    }
    return 0;
}