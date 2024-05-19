
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout << "size: " << v.size() << endl;
    for( int i=0; i < v.size(); ++i){
        // v.size() -->0(1)
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}
int main(){
    vector <int> v;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        /* code */
        int x;
        cin>> x;
        printVec(v);
        v.push_back(x);    //o(1)
        v.push_back(7);
        v.push_back(6);
        vector<int>v2=v;  //copy an vector to another vector -->o(n)
        v.pop_back( );
        v2.push_back(5);
        printVec(v);
        printVec(v);
        printVec(v2);

    }
    printVec(v);
    
}