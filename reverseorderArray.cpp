#include<iostream>

using namespace std;

int main(){
    int a[] = {1,2,6,9};
    int n = sizeof(a)/4;
    int b[n];
    for(int i=0; i<n;i++){
       int j = n-1-i; //i+j=n-1
       b[i] = a[j];
    }
   for(int i=0;i<n;i++){
    cout<<b[i]<<endl;
   }
}