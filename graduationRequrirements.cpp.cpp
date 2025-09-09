#include<iostream>
using namespace std;

int main (){

double credit;
double GPA;
do{
  cout<<"Enter your total credit: ";
  cin>>credit;
  cout<<"Enter your GPA: ";
  cin>>GPA;
 
}while(credit < 30 || GPA < 2.0 );
  cout<<"Congratulations!\n";
 
  return 0;
}