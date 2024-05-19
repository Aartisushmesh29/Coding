#include<bits/stdc++.h>
using namespace std;
 
 class Human{
    public:
     int height;
     int weight;
     int age;
    public:
    int getAge(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;

    }
 };
 class male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<< endl;
    }
 };
 
int main(){
    male object;
    cout<<object.age << endl;
    cout<<object.weight<< endl;
    cout<<object.height << endl;
    cout<<object.color << endl;
    object.setweight(84);
    cout<< object.weight<<endl;
    object.sleep();
    return 0;
}