#include <iostream>
using namespace std;

void starbucks();
void starbucks(string custom);

int main (){
 starbucks("pumpkin spice latte with oat milk and whipped cream");

  return 0;
}

void starbucks(){
  cout<<"Your drink is ready!\n";
}
void starbucks(string custom){
  cout<<"Your " << custom << " is ready!\n";
}