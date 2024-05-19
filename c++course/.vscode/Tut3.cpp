#include<iostream>
using namespace std;
//Power function
// int power(int a ,int b){
  
//     int ans=1;
//     for (int i = 1; i <=b; i++)
//     {
//        ans=ans*a; /* code */
//     }
//     return ans;
// }
// int main()
// {  
//     int a,b;
//     cin>>a>>b;
//    int  answer=power(a,b);
//    cout<<"answer is "<<answer<<endl;

//     return answer;
    
// } 
//Even number?
// bool isEven(int a){
//     //odd
//     if(a&1){
//         return 0;
//     }
//     else  { //even
//              return 1;
//           }

// }
// int main(){
//     int num;
//     cin>>num;
//     if (isEven(num)){
//         cout <<"even number"<<endl;  
//           }
//           return 0;
// }
//Factorial function 
// int factorial(int a){
//     int fact=1;
//     for(int i=1;i<=a;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// //nCr funtion
// int nCr(int n, int r){
// int num=factorial(n);
// int den=factorial(r)*factorial(n-r);
// int answer=num/den;
// return answer;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ans=nCr(n,r);
//    cout<<"answer is "<<ans <<endl;
// }
//counting
// void counting(int n){//function signature
// //function body
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     counting(n);//funtion call  
//     return 0;
// }
// bool isPrime(int n){
//     for(int i=2;i<=n;i++){
//     if(n%i==0){
//     return 0;
// }
// }
//  return 1;
// }
// int main(){
//     int n ;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"is a prime no.";
//     }
//     else {
//         cout <<"not a prime";
//     }
//     return 0;
// }
// void dummy(int n){
//     n++;
//     cout<<"n is"<<n<<endl;
// }
// int main(){
// int n;
// cin>>n;
// dummy(n);
// cout<<"number n is"<<n<<endl;
// return 0;
// }
    int APseries(int n){
        
            int AP=3*n+7;
            return AP;
        }
    int main(){
        int n;
        cin>>n;
        int  ans=APseries(n);
        cout<<ans;
        return 0;

    }
    int Fibonacci(int n){

    }
