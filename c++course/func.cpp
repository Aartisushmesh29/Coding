//   void type function
#include<iostream>
using namespace std;


// void sayHi(string name , int age){
//     cout << "Hello " << name << " you are "<<age;
// } 
// int main(){
//     sayHi("Mike", 69);

//     sayHi("Tom", 42);

//     sayHi("Steve",35 );

//     return 0;
// }
// REturn type functions


double cube(double num)
{
    double result = num*num*num;
    return result;
}
int main(){
    double answer = cube(5.0);
    cout<<answer;
    return 0;
}