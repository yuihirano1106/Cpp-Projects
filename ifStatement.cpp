#include <iostream>
#include <string>
using namespace std;

void bmiCheck(double bmi);

int main(){
  double weight;
  double height;
  cout<<"Enter your weight(kg) and height(m):\n";
  cin>>weight;
  cin>>height;


  double bmi = weight / (height * height);
  bmiCheck(bmi);

  if(bmi >= 25.0 && bmi <=29.9){
    cout<<"You are overweight. Let's reconsider your daily diet!";
  }
  else if(bmi > 30){
    cout<<"You are obese.Let's reconsider your daily diet + get some exercise!";
  }else{
    cout<<"You are healthy! keep it up!";
  }

  return 0;
}

void bmiCheck(double bmi){
  cout<<"Your BMI is: "<<bmi<<"\n";
}