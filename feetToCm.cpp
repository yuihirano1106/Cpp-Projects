#include <iostream>
using namespace std;

void convertInToCm (double cm);
int main(){
  double heightF;
  double heightI;

  cout<<"Enter your height in feet: ";
  cin>>heightF;
  cout<<"Enter your height in inches: ";
  cin>>heightI;

  double cm = ((heightF*12)+heightI)*2.54;

  convertInToCm(cm);





  return 0;
}

void convertInToCm (double cm){
  cout<<"Your height is: "<<cm<<"cm\n";
}