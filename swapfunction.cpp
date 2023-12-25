#include<iostream>

using namespace std;

void swap(int x, int y){
    cout<<&x<<endl;
    int z;
    z = x;
    x = y;
    y = z;
}

int main(){
    int x = 12;
    int y = 5;
    cout<<&x<<endl;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}