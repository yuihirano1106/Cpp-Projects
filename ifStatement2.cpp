#include <iostream>
using namespace std;

int main (){
int month;
cout<<"Enter the month";
cin>>month;
 
if(month == 12 || month == 1 ||month == 2){
  cout<<"It's WINTER!";
}
else if(month == 3 || month == 4 || month == 5){
  cout<<"It's SPRING!";
}
else if(month == 6 ||month == 7 || month == 8){
  cout<<"It's SUMMER!";
}
else{
  cout<<"It's FALL!";
}
}