#include<bits/stdc++.h>
using namespace std;

// int count = 0;
// vector<int>ans;
// void print( ){
//     if(count == n)
//     return;
//     ans.pushback(count);
//     count++;
//     print();
//     cout<<ans<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print();
//     return 0;
// }


// void printName(int i , int n){
   
//     if(i>n) return;
//     cout<<"AARTI"<<endl;
//     printName(i+1,n);
// }
// int main(){
//     int n = 4;
//     printName(1,n);
//     return 0;
// }
// numbers in reverse order
void printName(int i , int n){
   
    if(i<1) return;
    cout<<i<<endl;
    printName(i-1,n);
}
int main(){
    int n = 4;
    printName(n,n);
    return 0;
}
