#include<iostream>

using namespace std;

int fact(int x){
    int f = 1;
    for(int i=1; i<=x;i++){
        f = f*i;
    }
    return f;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int r;
    cout<<"Enter r: "<<endl;
    cin>>r;
     
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);

    int com = a/(b*c);

    cout<<"combination is: "<<com<<endl;
}