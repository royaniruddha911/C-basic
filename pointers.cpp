#include<iostream>

using namespace std;

int main(){
    int x = 3;
    int* p = &x; //int* store the adress of integer type data
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl; // star operator--adrees --->adress related to varible----> print the value 
    cout<<&p<<endl;
}
