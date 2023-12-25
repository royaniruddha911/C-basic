#include<iostream>

using namespace std;

int main(){
    string str = "Aniruddha Roy";
    cout<<str;
    str[0] = 'B';
    str[2]= 'n';
    cout<<endl;
    cout<<str;
    cout<<str.size();
}