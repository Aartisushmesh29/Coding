#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
     // pattern 1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";

    // }
    // pattern 2
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<< count ;
    //         cout<<" ";
    //         count++;
    //     }
    //     cout<<"\n";
        
    // } 
     // pattern 3
    // for( int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
            
    //             cout<<"*";
    //         } 
    //        cout<<"\n";

    //     }
     //pattern 4
    //   int count=0;
    // for(int i=0;i<n;i++){
    //      for(int j=0;j<i;j++){
    //         cout<< count ;
    //        cout<<" ";
    //     }
    //     count++;
    //    cout<<"\n";
        
    // } 
    //pattern 5
    // int count=1;
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<i;j++){
    //         cout<< count ;
    //        cout<<" ";
    //        count++;
    //     }
       
    //    cout<<"\n";
        
    // } 
    // pattern 6
    //  for(int i=0;i<=n;i++){
    //      for(int j=0;j<=i;j++){
    //         cout<<(i-j+1);
    //         cout<<" ";
        
    //     }
       
    //    cout<<"\n";
    //  }
    //pattern 7
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         char ch='A'+i-1;
    //          cout<<ch;
    //     } 
    //     cout<<endl;
    //  }
    // pattern 8
    //    for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         char ch='A'+j-1;
    //          cout<<ch;
    //     } 
    //     cout<<endl;
    //  }
    //pattern 9
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         char ch='A'+i+j-2;
    //          cout<<ch;
    //     } 
    //     cout<<endl;
    //  }
    //pattern 10
    //   for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+i-1;
    //          cout<<ch;
    //     } 
    //     cout<<endl; 
    //}
    //pattern 11
    //  char ch='A';
    //   for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){ 
    //          cout<<ch++;
    //     } 
    //     cout<<endl;
    //   }
    // pattern 12
    //   for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+i+j-2;
    //          cout<<ch;
    //     } 
    //     cout<<endl;
    //  }
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
             cout<<" ";
            
        } 
        
        cout<<endl;
     }

return 0;
}
