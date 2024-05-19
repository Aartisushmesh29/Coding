#include<bits/stdc++.h>
using namespace std;

// lenth of a string 
// int getLength(char name[]){

//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;

//     }
//     return count;
// }

// // Reverse string
// void reverse(char name[] , int n){ 
//     int s = 0;
//     int e = n -1 ;
//     while(s < e){
//         swap(name[s++] , name[e--]);
//     }
// }

// Check palindroome 
// bool checkpalinrome(char a[] , int n){
//      int s = 0;
//      int e =n-1;
//      while(s<=e){
//         if(a[s] != a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//      }
//      return 1;
// }

char MaxOccCharacter(string s){
    int arr[26] = {0};
    for(int i = 0; i <s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;

    }
    // find max occurence
    int maxi = -1 ,ans =0;
    for(int i = 0; i < 26 ; i++){
        if(maxi< arr[i]){
            ans = i;
            maxi = arr[i];

        }
    }
    return 'a' +ans;
}
int main(){
    // char name[20];
    // cin >> name; 
    // cout << name;
    // int len = getLength(name);
    // reverse(name , len);
    // cout << " your name after : ";
    // cout << name;
    // cout << " Palindrome or not " << checkpalinrome(name , len);
    string s ;
    cin >>s;
   cout << MaxOccCharacter(s);
    return 0;
}