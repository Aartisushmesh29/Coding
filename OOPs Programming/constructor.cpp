#include<bits/stdc++.h>
using namespace std;


class Hero{
    //cinstructor
    public:
    int health;
    char level;
    // Hero() {
    
    //     cout<<"constructor is called"<<endl;
    // }
    // // parameterized constrouctor and thsi keyword
//     Hero(int health){
//         // this keyword stores the address of current obect
//         cout << "this->" <<    this <<endl;
//       this -> health = health;
//     }
//     // copy constructor
     
//     Hero(int health , int level ){
//         this->level = level;
//         this->health = health ;
//     }
//     void print(){
//         cout << "health "<< this-> health << endl;
//         cout << "level " << this-> level << endl;
//     }
//    int gethealth(){
//     return health;
//    }
//    int getlevel(){
//     return level;
//    }

// Destructor
~Hero(){
    cout << "Destructor is called"<< endl;
}
 
};

 
int main(){
    // cout<<"Hi"<<endl;
    // // object created statically 
    // // Hero a;
    // // obeject created dynamically
    // // Hero *h = new Hero; 
    // Hero a(10);
    // cout<<"address of a"<< &a << endl;
    // a.gethealth();



    // Hero S(70 , 'c');
    // S.print();
    // // cpy constructor call
    //  Hero R(S);
    //  R.print();

    // return 0;

    // Hero a;
    // dynamically 
    Hero *b = new Hero();
    delete b;
}