#include<iostream>

using namespace std;

void print(int n){
    if(n==0) return; // base case-- stop recursion 
    print(n-1); // call --- recursion 
    cout<<n<<endl; // work 
    
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    print(n);
}