#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Eating bread..." << endl;
    }
};
int main(void)
{
    Animal A;
    A.eat();
    Dog d;
    d.eat();
    return 0;
}