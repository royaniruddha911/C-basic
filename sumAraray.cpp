#include<iostream>

using namespace std;


int main(){
    int arr[] = {1,2,4,5};
    int sum = 0;
    int n = sizeof(arr)/4;
    for(int i=0;i< n;i++){
       sum = sum + arr[i];
    }
    cout<<"Sum is :"<<sum;
}