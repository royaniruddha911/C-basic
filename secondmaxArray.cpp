#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,6,3,17,12,16,18,21,15,40,100,85,91,96};
    int n = sizeof(arr)/4;
    int first_max = arr[0];
    for(int i=0;i<n;i++){
        if (arr[i] >= first_max){
            first_max = arr[i];
        }
    }
    int second_max = arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]!=first_max){
            second_max = max(second_max,arr[i]);
        }
    }
    cout<<"Second max is: "<<second_max;
}

