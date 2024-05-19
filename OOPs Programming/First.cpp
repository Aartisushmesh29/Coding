#include<bits/stdc++.h>
using namespace std;

// class Hero {
//     // proeprties
//     int health;
// };
// int main(){
//     // creation of object 
//     Hero h1;
//     cout<<"size : "<<sizeof(h1)<<endl;
//     return 0;
// }
// Empty class --> which has no properties

// class Hero {
//     // proeprties
  
// };
// // Output of this code will be ----> 1 memory is allocated to empty class
// we can use a class in our current file by provideing the name of external class file name in hearder file like "#include ext.cpp" 
// int main(){
//     // creation of object 
//     Hero h1;
//     cout<<"size : "<<sizeof(h1)<<endl;
//     return 0;
// }
// Accessing data members and access specifier
// class Hero {
//     // proeprties
//     // Bydefault access specifier is private
//     int health;
//     public:
//     char level;
//     void print(){
//         cout<<health<<endl;
//     }

// };
// // Output of this code will be ----> 1 memory is allocated to empty class
// int main(){
//     // creation of object 
//     Hero Ram;
//     // accessing data members-->object_name.Data member
//     // Ram.health = 70; -->error  
//     Ram.level = 'A';
//     // this will give an bcz  health is a private data member
//     // cout<<"health is " <<Ram.health<<endl;
//     // this will get print bcz level is public data member
//     cout<<"level is " <<Ram.level<<endl;
//     return 0;
// }
    //  Getter or setter-->Are the function used in class ---If any data member is private in a class so to access it,set or get, it can be done by using setter and getter.
    // get is for fetching(read) and set is for condition or settin ga value 
class Hero {
    // proeprties
    // Bydefault access specifier is private
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<health<<endl;
    }

  int gethealth(){
    return health;
  }
  char getlevel(){
    return level;

 }
 void sethealth(int h){
    health = h;
 }
 void setlevel(char ch){
    level = ch;
 } 
};
  
int main(){
    // creation of object 
    // static allocation
    // Hero Ram;
    // accessing data members-->object_name.Data member
    // Ram.sethealth(70) ;
    // Ram.level = 'A';
    // this will give an bcz  health is a private data member
    // cout<<"health is " <<Ram.health<<endl;
    // this will get print bcz level is public data member
    // cout<<"level is " <<Ram.level<<endl;
    // cout<<"health is " <<Ram.gethealth()<<endl;
    //  padding and greedy alighnment
    //  dynamically
    // Hero *b = new Hero;
    // b-->setlevel('A');
    // cout<<"level is "<< (*b).level<<endl;
    // // OR
    // cout<<"level is "<< b-->level<<endl;

    
    // return 0;
}