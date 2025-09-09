#include <iostream>
#include <string>
using namespace std;

int main (){
 string password;

 do{
  cout<<"Enter your password: ";
  cin>>password;
 }
 while(password != "HelloWorld");
 cout<<"Your pass word is "<< password <<"\n";
 cout<< "Welcome to Yui's World!";
 
 
  return 0;
}