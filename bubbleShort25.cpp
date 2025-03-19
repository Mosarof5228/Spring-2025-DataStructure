#include<iostream>
using namespace std;
int main(){
    int A[5]={10,2,5,3,5};
    int n,i,j;
    n=5;
    cout<<" First Array Without Change: ";
    for(i=0;i<n;i++){
        cout<<A[i];
        cout<< " ";
    }
    cout<<" After Sorting Array is: ";
    //how much loop will run
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
            //     int temp=A[j];
            //     A[j]=A[j+1];
            //     A[j+1]=temp;
            swap(A[j],A[j+1]);
            }
            
        }
    }
    for(i=0;i<n;i++){
        cout<<A[i];
        cout<<" ";
    }
}