#include<bits/stdc++.h>
using namespace std; 
int main(){
    pair< int,string> p;
    cin >> p.first;
    cout << p.first;
    // p = make_pair(2,"abc");
    p = {2,"abc"};
    // use of reference (&) change the actual value in p1 
    pair<int,string> & p1 = p; 
    p1.first = 3;
    cout << p.first << " "<< p.second << endl;
    int a[3] = {1,2,3};
    int b[3] = {2,3,4};
    // declaratin of array of pair
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        /* code */cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    
}
// vectors
