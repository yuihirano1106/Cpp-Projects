#include <iostream>
#include <string>
using namespace std;

int main(){
  int age;
  string sex;
  cout<<"Enter your age and sex: ";
  cin>>age;
  cin>>sex;

  
  if(age >=13 && age < 18 && sex == "female"){
    cout<<"You are teenager and girl!";
  }
  else if(age >=18 && sex == "female"){
    cout<<"You are an adult and woman!";
  }
  else if(age >=13 && age < 18 && sex == "male"){
    cout<<"You are teenager and boy!";
  }
  else if(age >=18 && sex == "male"){
    cout<<"You are an adult and man!";
  }
  else {
    cout<<"You are baby or senior ";
  }



  return 0;
}