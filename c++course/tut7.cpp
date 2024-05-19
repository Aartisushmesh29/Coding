#include<iostream> 
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers a b c\n";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"a is largest " <<a;
    } 
    else if(b>a&&b>c){
        cout<<"b is largest " <<b;
    }
    else {
        cout<<"c is largest " <<c;
    }

    return 0;
}