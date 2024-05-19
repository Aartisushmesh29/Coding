#include<iostream>
using namespace std;
// int main(){
//     int a,b=1;
//     a=10;
//     if(++a)
//        cout<<b;
//     else
//        cout<<++b;
 
// }
// int main(){
//     int a=1;
//     int b=2;
//     if(a-- > 0 && ++b > 2){
//         cout<<"stage  - inside if";
//     }
//     else{
//         cout<<"stage2 - inside else";

//     }
//     cout<<a<<" "<<b<<endl;

// }
// int main(){
//     for(int i=0; i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }
// int main(){
//     for(int i=0; i<=15; i+=2){
//           cout<< i <<" ";
//           if(i&1){
//             continue;
//           }
//           i++;
//     }
// }
// int main(){

//     for( int i=0; i< 5; i++){
//         for (int  j=i; j <=5; j++){
//             if(i+j==10){
//                 break;
//             }
//             cout<<i<<" "<<j<< endl;
//         }
        
        
//     }
// }
// int main (){
//     int n ,r;
//     cin>>n;
//     int product=1;
//     int sum=0;
//     while (n!=0)
    
//     {
//        r=n%10;
//        product=product*r;
//        sum=sum+r;
//        n=n/10; /* code */
//     }
//     int Result=product-sum;
//     cout<<Result;
// }
int main(){
    int n;
    cin>>n;
    int count =0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    
}
    