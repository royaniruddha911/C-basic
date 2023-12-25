#include<iostream>
using namespace std;


int power (int x, int y){
    if(y==0) return 1;
    return  x*power(x,y-1);
}

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    int b; 
    cout<<"Enter exponenet: ";
    cin>>b;
    cout<<"Power is:" << power(a,b)<<endl;
}