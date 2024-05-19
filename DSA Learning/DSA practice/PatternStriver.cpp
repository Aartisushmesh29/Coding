#include<bits/stdc++.h>
using namespace std;

 void patter1(int n){

    for(int i = 0;i<n ; i++)

    {
        for(int j = 0;j< n ; j++){
            cout << "*";
        }
        cout <<endl;
    }
 }
 void patter2(int n){

    for(int i = 0;i<n ; i++)

    {
        for(int j = 0;j< i ; j++){
            cout << "*";
        }
        cout <<endl;
    }
 }
 void patter3(int n){

    for(int i = 1;i<n ; i++)

    {
        for(int j = 1;j< i ; j++){
            cout << j<< " ";
        }
        cout <<endl;
    }
 }
 void patter4(int n){

    for(int i = 1 ; i < n ; i++)

    {
        for(int j = 1 ; j <= i ; j++){
            cout << i << " ";
        }
        cout <<endl;
    }
 }
 void patter5(int n){

    for(int i = 0 ; i <= n ; i++)

    {
        for(int j = 0 ; j <= n - i + 1 ; j++){
            cout << " * ";
        }
        cout <<endl;
    }
 }
 void patter6(int n){

    for(int i = 1 ; i <= n ; i++)

    {
        for(int j = 1 ; j <= n - i + 1 ; j++){
            cout << j << "  ";
        }
        cout <<endl;
    }
 }
 void pattern7(int n){

    for(int i = 0 ; i < n ; i++)

    {
        for(int j = 0 ; j < n - i - 1  ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < 2*i + 1 ; j++){
            cout<< "*";
        }
        for(int j = 0 ; j < n - i - 1  ; j++){
            cout << " ";
        }

        cout <<endl;
    }
 }

 void pattern8(int n){

    for(int i = 0 ; i < n ; i++)

    {
        //    space
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }
        //    stars
        for(int j = 0 ; j <  2*n - (2*i + 1) ; j++){
            cout<< "*";
        }
           /  space
        for(int j = 0 ; j < i ; j++){
            cout << " ";
        }

        cout <<endl;
    }
 }

//  pattern 9 is the combination of 7 and 8 .

void pattern10(int n){
    for(int i =0 ; i< 2*n -1 ; i++){
        int stars = i ;
        if(i > n) stars = 2*n - i;
        for(int j = 1 ; j <= stars; j++ ){
            cout <<"*";
        }
        cout << endl;
    }
}

 void pattern11(int n){
    int start = 1;
    for(int i = 0 ;i<n ; i++)

    {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0;j <= i ; j++){
            cout << start;
            start = 1- start;
        }
        cout <<endl;
    }
 }
 
 void pattern12(int n){
    int space = 2 *(n-1);
    for(int i = 1 ; i <= n ; i++)

    { 
        // numbers
        for(int j = 1; j <= i ; j++){
            cout << j ;
        }
        // space
        for(int j = 1 ; j <= space ; j++){
            cout<< " ";
        }
        //numbers
        for(int j = i ; j >= 1 ; j--){
            cout << j;
        }

        cout <<endl;
        space -= 2;
    }
 }

void pattern13(int n){
     int num = 1;
    for(int i = 1 ; i <= n ; i++)

    {
        for(int j = 1 ; j <=i  ; j++){
            cout <<num <<" ";
            num++;
        }
        cout <<endl;
    }
 }
void pattern14(int n){
     int num = 1;
    for(int i = 1 ; i <= n ; i++)

    {
        for(char j = 'A' ; j <= 'A' + i  ; j++){
            cout << j<<" ";
        }
        cout <<endl;
    }
 }
void pattern16(int n){
     
    for(int i = 0 ; i < n ; i++)

    {    char ch = 'A' + i;
        for(char j = 0 ; j <= i  ; j++){
            cout << ch<<" ";
        }
        cout <<endl;
    }
 }
void pattern17(int n){
     
    for(int i = 0 ; i < n ; i++)

    {    
        // space
        for(int j = 0 ; j < n -i -1  ; j++){
            cout <<" ";
        }
        // Characters
        char ch ='A';
        int breakpoint = (2*i + 1)/2;
        for(int j = 1 ; j <= 2*i + 1 ; j++){
            cout << ch;
            if( j<= breakpoint) ch++;
            else ch--;
            
        }
        // space
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout << " ";
        }
        cout <<endl;
    }
 }

 void pattern18(int n){
   
    for(int i = 0 ; i < n ; i++)

    {
        for(char j = 'E' - i ; j <= 'E' ; j++){
            cout << j<<" ";
        }
        cout <<endl;
    }
 }

void pattern19(int n){
    int iniSpaces = 0 ;
    for(int i = 0 ; i < n ; i++)

    {
        //    stars
        for(int j = 1 ; j <= n-i ; j++){
            cout << "*";
        }
        //    spaces
        for(int j = 0 ; j <  iniSpaces ; j++){
            cout<< " ";
        }
        //  stars
        for(int j = 1 ; j <= n-i ; j++){
            cout << "*";
        }
        iniSpaces +=2; 
        cout <<endl;
    }
    iniSpaces = 2*n - 2;
    for(int i = 1 ; i <= n ; i++)

    {
        //    stars
        for(int j = 1 ; j <=i ; j++){
            cout << "*";
        }
        //    spaces
        for(int j = 0 ; j <  iniSpaces ; j++){
            cout<< " ";
        }
        //  stars
        for(int j = 1 ; j <=i ; j++){
            cout << "*";
        }
        iniSpaces -=2; 
        cout <<endl;
    }
 }

 void pattern20(int n){
    int spaces = 2*n -2 ;
    for(int i = 1 ; i <= 2*n -1 ; i++)

    {
        //    stars
        int stars = i;
        if(i > n) stars = 2*n -i;
        for(int j = 1 ; j <= stars ; j++){
            cout << "*";
        }
        //    spaces
        for(int j = 1 ; j <= spaces ; j++){
            cout<< " ";
        }
        //  stars
        for(int j = 1 ; j <= stars ; j++){
            cout << "*";
        }
        cout <<endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
 }
 void pattern21(int n){
    for(int i =0 ; i <n ; i++){
        for(int j = 0; j <n ; j++){
            if(i == 0|| j ==0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
 }
 void pattern22(int n){
    for(int i =0 ; i <2*n -1 ; i++){
        for(int j = 0; j <2*n -1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n- min(min(top , down), min(left , right)));
        }
        cout << endl;
    }
 }
int main(){
    int n;
    cin>>n;
    patter1(n);
    patter2(n);
    patter3(n);
    patter4(n);
    patter5(n);
    patter6(n);
    pattern7(n);
    pattern8(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    return 0;
}