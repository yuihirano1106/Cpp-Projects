#include <iostream>
using namespace std;

void convertInToCm(double feet, double inches);
void convertCmToIn(double cm);
int main(){
  double heightF;
  double heightI;
  double heightCm;
  int choice;

  cout<<"Choose conversion type:\n";
  cout<<"1. Convert feet and inches to centimeters\n";
  cout<<"2. Convert centimeters to feet and inches\n";
  cout<<"Enter your choice (1 or 2): ";
  cin>>choice;
  
  if(choice == 1){
    cout<<"Enter feet: ";
    cin>>heightF;
    cout<<"Enter inches: ";
    cin>>heightI;
    convertInToCm(heightF, heightI);
  }
  else if(choice == 2){
    cout<<"Enter your height(cm): ";
    cin>>heightCm;
    convertCmToIn(heightCm);
  }
  else {
    cout<<"Invalid choice. Please enter 1 or 2.\n";
  }




  return 0;
}

void convertInToCm(double feet, double inches){
  double cm = ((feet * 12) + inches) * 2.54;
  cout<<"Your height is: "<<cm<<" cm\n";
}

void convertCmToIn(double cm){
  double totalInches = cm / 2.54;
  double feet = (int)(totalInches / 12);
  double inches = totalInches - (feet * 12);
  cout<<"Your height is: "<<feet<<" feet "<<inches<<" inches\n";
}