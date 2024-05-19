#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    int age;
    int weight;
    public:
     void speak(){
         cout<<"Speaking"<<endl;
     }
};
class dog: public animal{

};
class germanSepherd : public dog{

};

int main(){
     germanSepherd d;
     d.speak();
     cout<<d.age<<endl;
    return 0;
}
