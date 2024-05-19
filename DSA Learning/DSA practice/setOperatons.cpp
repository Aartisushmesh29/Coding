#include<bits/stdc++.h>
// #include <algorithm>
// #include <vector>
using namespace std;

//    ****UNION****
// int main(){
     
//      vector<int>a = {1,2,3,4};
//      vector<int>b = {3, 4,5,6,7};

//      set<int>c;
//      for (int i = 0; i < a.size(); i++)
//      {
//         /* code */
//         c.insert(a[i]);

//      }
//      for (int i = 0; i < b.size(); i++)
//      {
//         /* code */
//         c.insert(b[i]);

//      }
//      for (auto it = c.begin(); it!= c.end(); it++)
//      {
//         cout<<*it<<" ";
//         /* code */
//      }
     

//     return 0;
// }
//  **** SPACE OPTIMIZATON OF UNION --> CAN BE DONE USING TWO POINTER APPROACH*****
// int main(){
//    vector<int>a = {1,1,1,2,2,3,3,3};
//    vector<int>b = {3,3,3,4};

//    int left = 0; 
//    int right = 0;
//    vector<int> c;
//    while(left<a.size() || right<b.size()){

//       // skip duplicates
//       while(left > 0 && left < a.size()  && a[left] == a[left - 1]){
//          left++;
//       }
//       while(right > 0 && right < b.size()  && b[right] == b[right - 1]){
//          right++;
//       }

//       // one array exhaust
//       if(left>=a.size()){
//          c.push_back(b[left]);
//          left++;
//          continue;
//       }
//       if(right>=b.size()){
//          c.push_back(a[left]);
//          left++;
//          continue;
//       }
//       // comparison
//       if(a[left]<b[right]){
//          c.push_back(a[left]);
//          left++;
//       }
//       else if(a[left]>b[right]){
//          c.push_back(b[right]);
//          right++;
//       }
//       else{
//          c.push_back(a[left]);
//          left++;
//          right++;
//       }
      
   //  for (auto it = c.begin(); it!= c.end(); it++)
   //   {
   //      cout<<*it<<" ";
   //      /* code */
   //   }
//    }
// }

// ******INTERSECTION OF TWO SETS******

// int main()
// {
//     vector<int> a = {1, 7, 3, 4};
//     vector<int> b = {3, 4, 5, 6, 7, 8};

//     vector<int> c;

//     if (b.size() >= a.size())
//     {
//         for (int i = 0; i < a.size(); i++)
//         {
//             for (int j = 0; j < b.size(); j++)
//             {
//                 if (a[i] == b[j])
//                 {
//                     c.push_back(a[i]);
//                 }
//             }
//         }
//     }
//     cout << "A : ";
//     for (auto &k : a)
//     {
//         cout << k << " ";
//     }
//     cout << endl;
//     cout << "B : ";
//     for (auto &k : b)
//     {
//         cout << k << " ";
//     }
//     cout << endl;
//     cout << "Intersection => C : ";
//     for (auto &k : c)
//     {
//         cout << k << " ";
//     }
//     return 0;
// }
 

//  ****SET DIFFERENCE*****

// int main(){

//     vector<int>a = {1,2,3,4,5,6};
//     vector<int>b = {3,4,5,7};
//     vector<int>c;
//     vector<int>d;
//     // a-b
//     for(int i = 0; i < a.size(); i++){

//         bool flag = false;
//         for(int j = 0; j< b.size(); j++){
//              if(a[i] == b[j]){
//                 flag = true;
//                 break;
//              }
//         }
//              if(!flag){
//                 c.push_back(a[i]);

//              }
//     }
//     cout<<"a-b :";
//     for(auto i : c){
//         cout << i <<" ";

//     }
//     cout << endl;

//     // b-a 
//     for(int i = 0; i < b.size(); i++){

//         bool flag = false;
//         for(int j = 0; j< a.size(); j++){
//              if(b[i] == a[j]){
//                 flag = true;
//                 break;
//              }
//         }
//              if(!flag){
//                 d.push_back(b[i]);

//              }
//     }
//     cout<<"b-a :";
//     for(auto i : d){
//         cout << i <<" ";

//     }
  
//     return 0;
// }

// *****COMLIMENT OF SETS********
// int main(){
//      vector<int>a = {1,2,3,4,5};
//      vector<int>b = {6,7,8,9};
//      vector<int>c = {10,11,12,13};

//      set<int>s;
//      vector<int>a_comp;
//      vector<int>b_comp;
//      vector<int>c_comp;

//      for (int i = 0; i < a.size(); i++)
//      {
//         /* code */
//         s.insert(a[i]);
//      }
     
//      for (int i = 0; i < b.size(); i++)
//      {
//         /* code */
//         s.insert(b[i]);
//      }
     
//      for (int i = 0; i < c.size(); i++)
//      {
//         /* code */
//         s.insert(c[i]);
//      }

//      vector<int>U(s.begin(),s.end());
//      cout<<"UNIVERSAL SET IS :";
//      for(auto i : U){
//         cout << i << " ";
//      }
//     cout<<endl;
//      for (int i = 0; i < U.size(); i++)
//      {
//         /* code */
//         bool flag = false;
//         for (int j = 0; j < a.size(); j++)
//         {
//             /* code */if(U[i] == a[j]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             a_comp.push_back(U[i]);
//         }
        
//      }
//      cout<< "COMPLEMENT OF A:";
//      for(auto i : a_comp){
//         cout<< i << " ";
//      }
//      cout<<endl;
//      for (int i = 0; i < U.size(); i++)
//      {
//         /* code */
//         bool flag = false;
//         for (int j = 0; j < b.size(); j++)
//         {
//             /* code */if(U[i] == b[j]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             b_comp.push_back(U[i]);
//         }
        
//      }
//      cout<< "COMPLEMENT OF B:";
//      for(auto i : b_comp){
//         cout<< i << " ";
//      }
//      cout<<endl;
//      for (int i = 0; i < U.size(); i++)
//      {
//         /* code */
//         bool flag = false;
//         for (int j = 0; j < c.size(); j++)
//         {
//             /* code */if(U[i] == c[j]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             c_comp.push_back(U[i]);
//         }
        
//      }
//      cout<< "COMPLEMENT OF C:";
//      for(auto i : c_comp){
//         cout<< i << " ";
//      }
//      return 0;
     
// }

// *****CARTISIAN PRODUCT*****

int main(){
    
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {4, 5, 6, 7};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            cout << "{" << a[i] << "," << b[j] << "},"
                 << " ";
        }
    }

    return 0;

}

// *****DISJOINT SET******

int main(){

}

