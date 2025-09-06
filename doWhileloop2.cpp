#include<iostream>
using namespace std;

int main(){
  string email;
  do{
    cout<<"Enter your email\n";
    cin>>email;
  }
  while(email.empty());
   cout<<"Check your email";

  return 0;
}