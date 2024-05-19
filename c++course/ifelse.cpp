#include <iostream>
using namespace std;
// int main(){

//    bool isMale = true ;         //bool is a data type , whhich stores the true and false . 
//    bool isTall = true;         //bool is a data type , whhich stores the true and false . 
//    if(isMale && isTall){
//     cout<<"you are a tall male";
//    }
//    else{
//     cout<<"you are not a male";
//    }
//   return 0;

// } 

getMax(int num1,int num2, int num3)
{
      int result;
    if(num1 >= num2 && num1 >=num3){
        result = num1;
    }
    else if( num2 >=num1 && num2 >= num3){
                 result = num2;
    }
    else{
        return num3;
    }
    return result;
}
int main()
{
    cout << getMax( 2 ,3 ,4);
    return 0;
}

// Basic calculater


// int main(){
//     int num1,num2;
//     char op;
//     cout<<"Enter the first number";
//     cin>>num1;
//     cout<<"Entr operater";
//     cin>>op;
//     cout<<"Enter the second number";
//     cin>>num2;
//     int result;
//     if(op=='+'){
//       result = num1 + num2;
//     }
//     else if(op=='-'){
//         result = num1 - num2;
//     }
//     else if(op=='*'){
//         result = num1 * num2;
//     }
//     else if(op=='/' ){
//         result = num1 /num2;

//     }
//     else {
//        cout<< "invalid operator";

//     }
//     cout<<result;
//     return 0;
//     }

