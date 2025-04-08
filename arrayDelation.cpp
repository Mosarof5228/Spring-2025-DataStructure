#include<iostream>
using namespace std;
int main(){
    // int myArray[5]={10,20,30,40,50};
    // int deleteIndex=2;
    // for(int i=deleteIndex;i<4;i++){
    //     myArray[i]=myArray[i+1];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<myArray[i];
    //     cout<<endl;
    // }

    //if we want to delet first value of this array;
    int myArray[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        myArray[i]=myArray[i+1];
    }
    for(int i=0;i<4;i++){
        cout<<myArray[i];
        cout<<endl;
    }
}