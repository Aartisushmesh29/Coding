#include <iostream> 
using namespace std;
// int main() 
// {
//  cout<< (char)65 <<"\n";
// }

// NAMSPACE****
// first name space
// namespace first_space {
//  void func() {
//  cout << "Inside first_space" << endl;
//  }
// }
// // second name space
// namespace second_space {
//  void func() {
//  cout << "Inside second_space" << endl;
//  }
// }
// int main () {
//  // Calls function from first name space.
//  first_space::func();
 
//  // Calls function from second name space.
//  second_space::func(); 
//  return 0;
// }



// ****enum data type****

// enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
// int main()
// {
//  enum week day;
//  day = Wed;
//  cout<<day;
//  return 0;
// }

// A simple function example
/* This function adds two integer values
* and returns the result
*/
// int sum(int num1, int num2){
//  int num3 = num1+num2; return num3;
// }
// int main(){
//  //Calling the function
//  cout<<sum(1,99);
//  return 0;
// }


// ****DESTRUCTOR**** 
//  class Base{
//     public:
//     ~Base(){
//         cout<<"Base destructor"<<endl;
//     }
//  };
//  class derived: public Base{
//      public:
//      ~derived(){
//         cout<<"derived destructor"<<endl;
//      }
//  };
//  int main (){
//     Base *b = new derived;
//     delete b;
//     return 0;
//  }