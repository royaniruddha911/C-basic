#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,3,6,7,9,11};
    int n = sizeof(arr)/4;

    for(int i=0;i<n;i++){
        if(i%2 == 0){ 
            arr[i] = 10 + arr[i];
            }
        else{
            arr[i] = 2*arr[i];
        }

    }
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];

    }
}