#include<iostream>

using namespace std;

int swap(int x, int y){
    //cout<<"Enter First number: "<<endl;
    cin>>x;
    //cout<<"Enter second number:"<<endl;
    cin>>y;
    int z;
    z = y;
    y = x;
    x = z;
    cout<<x<<""<<y<<endl;
}


int main(){
    cout<<"Swap of two number is"<<swap(5,2);
}