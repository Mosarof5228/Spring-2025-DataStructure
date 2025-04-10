#include<iostream>
using namespace std;
int main(){
    int myArray[6]={5,3,2,1,10,8};
    int i,j,n=6;
    //print same array
    cout<<"Given Array is: ";
    for(i=0;i<n-1;i++){
        cout<<myArray[i] ,cout<<" ";
    }
    //axxecuting bubble sort
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
    for(i=0;i<n;i++){
        cout<<myArray[i];
        cout<<" ";
    }


}