#include <iostream>
using namespace std;
void converter (double kg);
int main (){
  double weight;

  cout<<"Enter your weight in Lb: ";
  cin>>weight;

  double kg = weight*0.4536;
  converter(kg);
}

void converter (double kg){
  cout<<"Your weight: "<<kg<<"kg";
}