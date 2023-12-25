#include<iostream>

using namespace std;

int fact(int x){
    if(x==0 or x ==1) return 1; 
    return x*fact(x-1);
}


int main(){
    int n; // integer variable 
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<fact(n); 
}