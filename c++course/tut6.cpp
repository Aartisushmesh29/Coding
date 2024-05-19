#include<iostream>
using namespace std;
int c=45; //here c is globel variable//
int main()
{
    int a,b,c;
    
    cout<<"enter the value of a\n";
    cin>>a;
    cout<<"enter the value of b\n";
    cin>>b;
    c=a+b;
    cout<<"the sum is" <<c;//when name of globel and local variable is same the local variable is//
    

    return 0;
}