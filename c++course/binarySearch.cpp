#include<iostream>
using namespace std;

   int binarySearch(int arr[],int size, int key){

        int start = 0;
        int end = size - 1;
        int mid = start + (end -start)/2 ;
        while(start <= end){
            if (arr[mid] == key)
            {
                return mid + 1;
            }
            if( key > arr[mid]){
                start = mid + 1; 

            }
            else{
                end = mid - 1;
            }
            mid = start + (end- start)/2;
            
        }
        return -1;
    }
    int main(){
        int size ;
        cout <<"enter size of an array"<<endl;
        cin >> size ;
        int arr[size];
        for(int i =0; i<size;i++){
            cin >>arr[i];
        }
        int key;
        cout <<"enter a key to search"<<endl;
        cin >>key;
        // int even[5] = {2,3,4,5,6};
        // int odd[6] = {4,6,7,8,9,10};
       int result = binarySearch(arr ,size ,key);
      
       if(result == -1){
       cout << "element is not present "<<endl;

       }
       else{
         cout << "element is present at index: " << result <<endl;
       }

        return 0;
    }
