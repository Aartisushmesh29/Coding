#include<iostream> 
using namespace std;
int main(){
// {   int i;
//     for( i=0;i<100;i++)
//     {
//         if(i%3==0)
//        {
//         continue;
//        }
//         cout<<i<<endl;
//     }
//         return 0;
// }

    int pocketmony ,date=3000;
    for(date =1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmony==0){
            break;
        }
    }
        cout<<"go out today!"<<endl;
        pocketmony=pocketmony-300;
    return 0;
}