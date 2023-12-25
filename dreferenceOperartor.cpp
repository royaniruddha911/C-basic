#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* ptr = &x;
    cout<<x<<endl;
    // cout<<*ptr<<endl; //priting x values using pointer
    *ptr = 25;
    cout<<x<<endl;
}