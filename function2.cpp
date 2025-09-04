#include <iostream>
using namespace std;

int total (int credit);

int main(){
  int credit;
  cout << "Enter your credit";
  cin >> credit;

  int result = total(credit);
  cout << "The total amount is: " << result << "\n";
  
  return 0;
}

int total (int credit){
  return credit*210;
}
