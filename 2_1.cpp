#include<iostream>
using namespace std;
int main(){
    int myArray[6]={3,1,2,6,4,10};
    int i,j,n=6;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(myArray[j]>myArray[j+1]){
                int temp=myArray[j];
                myArray[j]=myArray[j+1];
                myArray[j+1]=temp;
            }
        }
    }
    cout<<endl;
    for(i=0;i<n-1;i++){
        cout<<myArray[i];
        cout<<" ";
    }
}