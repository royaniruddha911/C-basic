#include<iostream>

using namespace std;


int main(){
    int x;
    cout<<"Enter number1:" <<endl;
    cin>>x;
    int y;
    cout<<"Enter number2:"<<endl;
    cin>>y;
    int z;
    z = x;
    x = y;
    y = z;
    cout<<x<<" "<<y;


}
