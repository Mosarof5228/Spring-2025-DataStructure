#include<iostream>
using namespace std;
int main(){
    int myArray[6]={1,2,3,4,5};
    for(int i=4;i>=2;i--){
        myArray[i+1]=myArray[i];
    }
    myArray[2]=300;
    for(int i=0;i<6;i++){
        cout<<myArray[i];
        cout<<endl;
    }
}