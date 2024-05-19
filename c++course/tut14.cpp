#include<iostream> 
using namespace std;
int main(){
    int row, col;
    cout<<" enter the number of rows and column"<<endl;
    cin>>row>>col;

    
    for (int i=1; i<=row;i++)
    {
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
         cout<<endl;
    }
}
//     int row, col; 
//     cout<<"enter the rows and column";
//     cin>>row>>col;
//     for(int i=1;i<=row;i++)
//     {
//         for (int j=1;j<=col;j++)
//         {
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";

//             }
//         }
//         cout<<endl;
//     }
//     return 0;

// }
// int n;
// cout<<"enter the value of n\n";
// cin>>n;
// for (int i=n; i>=1;i--)
//     {
//          for(int j=1;j<=i;j++){
//              cout<<"* ";
//          }
//          cout<<endl;
//     } 
//     return 0;
// }
// int n;
//  cout<<"enter the value of n\n";
//  cin>>n;
//  for (int i=1; i<=n;i++)
//     {
//       for(int j=1;j<=n;j++){
//         if(j<=n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<"* ";
//         }
//       }
//       cout<<endl;
//     }
//     return 0;
// }