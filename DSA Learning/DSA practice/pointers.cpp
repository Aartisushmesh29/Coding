#include<bits/stdc++.h>
using namespace std;
// int main(){
    // int num = 5 ;
    // cout << num <<endl;
    // // address of operator - & 
    // cout << "Address of num is " << &num <<endl;
    // int  *ptr = &num;
    // cout<<" Adress is : " << ptr <<endl;
    // cout<<" value is : " << *ptr <<endl;

    // int num = 5;
    // int a = num ;
    // a++; 
    // will not affect the value of num
//     cout <<num <<endl;
//     int *p = &num;
//     cout<<"before" <<num<<endl;
//     (*p)++;
//      cout << "after"<<num <<endl;
// //   copying a pointer
//      int *q = p;
//      cout << p << " - " << q <<endl;
//      cout << *p << " - " << *q <<endl;
    
    // important concept 
    // int i = 3 ;
    // int *t = &i;
    // cout <<"Before increment"<<*t<<endl; 
    // // *t  = *t +1 ;
    // cout <<"after increment"<<(*t)++<<endl;
    // // cout <<"before t" <<t<<endl;
    // // t = t + 1;
    // cout <<"afte decrement" << --(*t)<<endl;
    // return 0;


//    pointers in Arrays
    // int  arr[10] = {8,1,5,7 };
    // cout <<arr[0]<<endl;
    // cout <<&arr[0]<<endl;
    // cout << *arr+1<<endl;
    // cout << *(arr+1)<<endl;
    // cout << arr[2]<<endl;
    // cout << *(arr+2)<<endl;
    // cout << 2[arr]<<endl;
    // cout << *(2+arr)<<endl;

    // int temp[10];
    // cout <<sizeof(temp)<<endl;
    // cout <<sizeof(*temp)<<endl;
    // cout <<sizeof(&temp)<<endl;
    // int *ptr = &temp[0];
    // cout <<sizeof(ptr) << endl;
    // cout <<sizeof(*ptr) << endl;
    // cout <<sizeof(&ptr) << endl;

//    int a[20] = { 1,2,3,4};
//    cout<<"-->"<<&a[0]<<endl;
//    cout<<&a<<endl;
//    cout<<a<<endl;
   
//    int *p = &a[0];
//    cout << p << endl;
//    cout << *p << endl;
//    cout << "-->"<< &p << endl;

// //    symbol table content can not be changed
// int  arr[10] ={1,2};

// // arr = arr +1;
// int *ptr = &arr[0];
// // ptr = ptr +1;
// cout << ptr << endl;

// int arr[5] = {1,2,3,4,5};
// char ch[6] ="abcde";
// // prints 0th location of array
// cout << arr << endl;
// // prints entire string
// cout << ch << endl;
// char *c = &ch[0];
// // prints entire string
// cout << c << endl;
// // prints the first character of string
// cout << *c << endl;

// char temp = 'z';
// char * ptr = &temp;
// cout << ptr << endl;

// return 0;

// } 

// functions with pointers********

// void print(int *p){
//     cout << *p <<endl;
// }
// void update(int *p){
//     p = p + 1;
//     cout <<"inside"<< p<<endl;
//     *p = *p + 1;

// }
// int getSum(int arr[] , int n){
//     // this will print the size of pointer ---> kyuki ek function m array as a pointer jata hai 
//     cout << endl<< "size : " << sizeof(arr) << endl;

//     int sum = 0;
//     for(int i =0; i<n; i++){
//         sum+= i[arr];
//     }
//     return sum;
// }

// ***Double pointer with function
// void update(int **p2){
    // p2 = p2 +1;
    // kuch change hoga -->NO 
    // *p2 = *p2 +1;
    // kuch change hoga --> YES
    // **p2 = **p2 +1;
    // kuch change hoga --> YES
// }




int main(){
    //  int  value  =5;
    //  int *p = &value;
    // //  print(p);
    // cout<<"before"<<*p<<endl;
    // update(p);
    // cout<<"after"<<*p<<endl;
    // int arr[5] = {1,2,3,4,5};
    // cout<< "sum is" << getSum(arr, 5)<< endl;
    //  int i = 5 ;
    //  int *p = &i;
    //  int **p2 = &p;
    //  cout << endl << endl << "sab shi chl rha hai "<< endl<<endl;
    //  cout<<"printing p"<< p<<endl;
    //  cout<<"address of p "<<&p<<endl;
    //  cout<<"value at p2 is address of p "<<p2<<endl;
    //  cout<<"value at p is value of i "<<*p<<endl;
    //  cout<<"value of i can be accesed like this "<<**p2<<endl;
     
    //  cout << &i << endl;
    //  cout << p << endl;
    //  cout << &p << endl;
    //  cout << *p2 << endl; 
    //  cout <<p2<< endl;
    //  cout << &p2<< endl;
    //  cout << endl<< endl;
    //  cout << "Before "<<i<< endl;
    //  cout << "Before "<<p<< endl;
    //  cout << "Before "<<p2<< endl;
    //  update(p2);
    //  cout << "After "<<i<< endl;
    //  cout << "After"<<p<< endl;
    //  cout << "After"<<p2<< endl;
    //  cout << endl<< endl;

    // int f = 8;
    // int s = 18;
    // int*ptr = &s;
    // *ptr = 9;
    // cout << f << " " << s << endl;
    int arr[5];
    int *ptr;
    cout <<sizeof(arr)<<" "<< sizeof(ptr) << endl;
     return 0;
 }