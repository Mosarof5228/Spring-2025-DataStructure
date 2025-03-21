#include<iostream>
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