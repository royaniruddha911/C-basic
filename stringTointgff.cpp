#include<iostream>
#include<string>

using namespace std;

int main()
{
  string str1 = "45";
  string str2 = "3.14159";
  char str3[] = "31337 geek";
 
  // type of explicit type casting
  int myint1 = stoi(str1);
   
  // type of explicit type casting
  int myint2 = stoi(str2);
     
  // type of explicit type casting
  int myint3 = stoi(str3);
 
  cout << "stoi(\"" << str1 << 
          "\") is " << myint1 << '\n';
    cout << "stoi(\"" << str2 << 
            "\") is " << myint2 << '\n';
    cout << "stoi(\"" << str3 << 
            "\") is " << myint3 << '\n';
    return 0;
}