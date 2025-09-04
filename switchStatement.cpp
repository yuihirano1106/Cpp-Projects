#include <iostream>
#include <string>
using namespace std;

int concverStringToNum(string name) {
  if(name == "Julia") return 1;
  if(name == "Blake") return 2;
  if(name == "Eve") return 3;
  if(name == "Chole") return 4;
  if(name == "Violet") return 5;
  if(name == "Jason") return 6;
  return 0;
}

int main(){
   string name;
   cout << "Enter your name: ";
   cin >> name;

   switch(concverStringToNum(name)){
    case 1:
       cout << "You are independent and strong woman and such a good roommate!";
       break;
    case 2:
       cout << "You are funny and very good friend of Jason!";
       break;
    case 3:
       cout << "You are super cool and good runner!";
       break;
    case 4:
       cout << "You are difficult cat but everyone loves you anyway and you are so cute when you come say hi.";
       break;
    case 5:
       cout << "You are super energetic and fun dog but it really hurts when you step on my toes so please don't.";
       break;
    case 6:
       cout << "You are wonderful person and I really love you!";
       break;
    default:
       cout << "You are doing great! kee it up!";
       break;
   }

   return 0;
}