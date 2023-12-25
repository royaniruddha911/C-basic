#include<iostream>

using namespace std;


int main(){
    string s = "aniruddha roy is a very good student";
    int count = 0;
    int n = s.length();
    for(int i=0;i<n;i++) {
        if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
        count = count + 1;}

    }
    cout<<count;
}