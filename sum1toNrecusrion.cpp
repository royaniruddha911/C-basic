#include<iostream>

using namespace std;

int sum(int x){
    if (x==1) return 1;  // base case
    return x + sum(x-1); // recursion 
}

// main function 
int main(){
    int n; // integer variable -- n
    cout<<"Enter a number: "<<endl; // print a number 
    cin>>n; // receiving the number 
    cout<<sum(n);
}