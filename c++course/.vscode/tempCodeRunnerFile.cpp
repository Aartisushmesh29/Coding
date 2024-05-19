bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    else  { //even
             return 1;
          }

}
int main(){
    int num;
    cin>>num;
    if (isEven(num)){
        cout <<"even number"<<endl;  
          }
          return 0;
}