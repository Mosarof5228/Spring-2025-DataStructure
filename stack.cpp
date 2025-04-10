#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.pop();
    myStack.pop();
    while(!myStack.empty()){
        cout<<myStack.top() <<" ";
        myStack.pop();
    }
}