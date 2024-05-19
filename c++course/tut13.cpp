#include<iostream> 
using namespace std;
int main()

// {
//     int i=1;
//     i=i++ + ++i;
//     cout<<i<<endl;
//     return 0;

// } 
{
    int i=1,j=2,k;
    k= i + j + i++ + j++ + ++i + ++j;
    cout<<k<<endl;
    return 0;
}