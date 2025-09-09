#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int i;
int k;

for(i = 0; i <= 10; i++){
  cout << i <<" :";
    for(k = 0; k <= 10; k++){
      cout << setw(3) << i * k;
    }
      cout <<"\n";
}

  return 0;
}