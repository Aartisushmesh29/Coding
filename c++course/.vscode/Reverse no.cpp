#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
int main(){
    int n;
      cin>>n;
      int rem;
      int rev=0;
      
      while(n!=0)
      {
        rem=n%10;
        if (rev>(INT16_MAX/10)||rev<(INT_MIN/10))
        {
          return 0;
        }
        rev=rev*10+rem;
        n=n/10;
        
           
      }
      cout<<rev;
      return 0;
}