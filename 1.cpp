#include<iostream>
using namespace std;
int main(){
    int myArray[10] = {10, 30, 50, 22, 53}; // ১০ সাইজের অ্যারে
    int size=5;
    for(int i=0;i<size;i++){
        cout<<myArray[i];
        cout<<" ";
    }
    cout<<endl;
    //insertion
    for(int i=size-1;i>=0;i--){
        myArray[i+1]=myArray[i];
    }

    myArray[0]=500;
    size++;
    for(int i=0;i<size;i++){
        cout<<myArray[i] <<" ";
    }
    cout<<endl;

    for(int i=2;i<size;i++){
        myArray[i]=myArray[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<myArray[i]<<" ";
    }
    return 0;
}
