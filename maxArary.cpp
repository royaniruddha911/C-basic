#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,6,3,8,11,5};
    int n = sizeof(arr)/4;
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] >= max){
            max = arr[i];
        }
      
    }
    cout<<"max element is"<<max;
}