#include<iostream>
using namespace std;
int main(){
    int myArray[6]={1,3,6,10,20,30};
    int left,right,middle,data;
    left=0;right=5;data=100;
    while(left<=right){
        middle=(left+right)/2;
        if(data==myArray[middle]){
            cout<<"The data index is: "<<middle;
           return 0;
        }
        else if(data>myArray[middle]){
            left=middle+1;
        }
        else{
            right=middle-1;
        }
    }
    cout<<"data not not found";
    return 0;
}