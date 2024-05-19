#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
int main(){
    // int n;
    // int prod=1;
    // int sum=0;
    
    // cout <<"Enter the value of n\n";
    // cin>>n;
    // while(n!=0){
    //   int digit=n%10;
    //     prod=prod*digit;
    //     sum=sum+digit;
    //     n=n/10;
      
    // }
    //  int diff=prod-sum;
    //   cout<<"Answer is "<<diff;
      // int hammingweight(uint32_n){
      //   int count=0;
      //   while(n!=0)
      //   //checking last bit
      //   if(n&1){
      //       count++;
      //   }
      //   n=n>>1;
      // }
     // binary to decimal
      // int n ;
      // cin>>n;
      // int i=0,ans=0;
      // while(n!=0){
      //   int digit=n%10;
      //   if(digit==1){
      //     ans=ans+pow(2,i);
      //   }
      //   n=n/10;
      //   i++;
      // }
      // cout<<ans<<endl;
     // decimal to binary
    //  int n ;
    //   cin>>n;
    //   int ans=0 ;
    //   int i=0;
    //   while(n!=0){
    //     int bit=n&1;
        
    //       ans=(bit*pow(10,i)+ans);
        
    //     n=n>>1;
    //     i++;
    //   }
    //   cout<<ans<<endl;
      //revese a number
      int n;
      cin>>n;
      int rem;
      int rev=0;
      
      while(n!=0)
      {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        if (rev>(INT16_MAX/10)||rev<(INT_MIN/10))
        {
          
        }
        
              
      }
      // int n=2;
      
      // while(1)
      // {
      //   switch(n)
      //   {
      //     case 1: cout<<"first"<<endl;
      //     break;
      //   }
      //   exit();
      // }
      //Reverse integers 
      // int x;
      // cin>>x;
      //  int rev=0;
      // while(x!=0){
      //   int  digit=x%10;  
        
      //   rev=rev*10+digit;
      //   x=x/10;
      // }
      // cout<<rev<<"\n";
      // int n,m;
      
      // cin>>n;
      //  m=n;
      // int mask=0;

      // //edge case
      // if(n==0)
      //   return 1;
      
      // while(m!=0){
      //   mask=(mask<<1)|1;
      //   m=m>>1;
      // }
      // int ans=(-n)&mask;
      // cout<<ans;
    //   int n;
    //   cin>>n;
    //   int ans=1;
    //   for(int i=0;i<30;i++){
    //     if(ans==n)
    //     return 1;
    //     if(ans<INT_MAX)
    //     ans=ans*2;
    //   }
    //   cout<<ans;
    // return 0;
}

 

