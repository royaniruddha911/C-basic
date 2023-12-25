#include<iostream>

using namespace std;

int main(){
    int x;
    cout<<"Enter 1st Number: "<<endl;
    cin>>x;
    int y;
    cout<<"Enter 2nd Number: "<<endl;
    cin>>y;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"Swap is:"<<x<<" "<<y<<endl;
}