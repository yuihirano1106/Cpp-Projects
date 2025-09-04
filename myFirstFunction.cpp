#include <iostream>
using namespace std;

string friends (string string1, string string2, string string3);

int main(){
string friend1 ="Julia";
string friend2 ="Blake";
string friend3 ="Eve";
string everyone =friends(friend1,friend2, friend3);

cout<<"Hello my friends "<<everyone;

return 0;
}
string friends (string string1, string string2, string string3){
  return string1 + " " + string2 + " " + string3;
}
