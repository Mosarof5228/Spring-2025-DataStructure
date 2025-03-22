#include<iostream>
using namespace std;
int main(){
    int myArray[6]={1,3,5,2,4,6};
    int i,j,n;
    n=6;
    cout<<"Given Array Without Change: ";
    for(i=0;i<n;i++){
        cout<<" ";
       cout<<myArray[i];
    }
cout<<"Given Array After Bubble short";
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