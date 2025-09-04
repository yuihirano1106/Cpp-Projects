#include <iostream>
using namespace std;

// when you use return you need to start with int main...
// you dont use return you start with void
// when you make function outside of main function you have to write function(); on the top of main function

  // void hello(){
  //   cout<<"Hello World\n";
  // }
  //  int main(){
  //  hello();
  //  return 0;

  // void hello();
  // int main(){
  // hello(); // when you make another function under main function you need to let main function know that you made a function below
  //   return 0;
  // }

  // void hello(){
  //   cout<<"Hello world\n";
  // }


  // void keisan(int a, int b){
  //   int total;
  //   total = (30*a)+(40*b);
  //   cout<<"total is"<<total<<"\n";
  // }
  // int main (){
  //    int apple, orange;
  //    cout<<"how many apples?";
  //    cin>>apple;
  //    cout<<"how many oranges?";
  //    cin>>orange;
  //    keisan (apple,orange);

  //    return 0;
  // }

  //function using return

  // int keisan(int a){
  //   int total = a*200;
  //   return total;
  // }
  // int main(){
  //   int apple;
  //   cout<<"how many apples?";
  //   cin>>apple;
  //   int judge = keisan(apple);
  //   if(judge >3000)
  //       cout<<"its too expensive";
  //   else
  //   cout<<"its affordable";
  //   return 0;
  //     }

// void nibai(int x){
//   cout<<x*2<<"\n";
// }

// int main(){
//   int num;
//   cout<<"enter a number";
//   cin>>num;
//   nibai(num);
//   return 0;
// }


void bakePizza();//function signature
void bakePizza (std::string topping1);
int main(){

bakePizza("pineapple");

  return 0;
}
void bakePizza(){
  std::cout <<"Here is your pizza!\n";
}
void bakePizza (std::string topping1){
  std::cout <<"Here is your "<< topping1 << " pizza!\n";
}
