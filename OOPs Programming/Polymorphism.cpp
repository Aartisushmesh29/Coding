#include<bits/stdc++.h>
using namespace std;

//   Two types of polymorphism -
// 1. compile time polymorphism (static polymorphism)-->is achieved in Function overloading(function with same name but with differenrt number of arugments or different types of arguments) and Operator overloading.
// 2. Run time polymorphism( Dynamic polymorphism)--> is achieved in Function overriding.

// Function overloading
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello Aarti"<<endl;
//     }
//     void sayHello(char name ){
//         cout<<"Hello Aarti"<<endl;
//     }
//     void sayHello(string name){
//         cout<<"Hello Aarti"<<endl;
//     }
// };
// int main(){
//     A obj;
//     obj.sayHello();

//     return 0;
// }
// operator overloading
// subtracting two numbers with using + operator
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
        int value1 = this->a;
        int value2= obj.a;
        cout << "output "<< value2 - value1 <<endl;
    }

};
int main(){

    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    return 0;
}

// Runtime polumorphism

// class animal{
//     public:                   
    
//      void speak(){
//          cout<<"Speaking"<<endl;
//      }
// };
// class dog: public animal{
//  public:
//  void speak(){
//     cout<<"barking"<<endl;
//  }
// };


// int main(){
//      dog d;
//      d.speak();
//     return 0;
// }
