#include<iostream>
using namespace std;

int main(){
    int num[5];
    cout <<"Enter the number";
    for(int i=0;i<5;i++){
    cin>>num[i];
    }
    for(int i=0;i<5;i++){
        if(num[i]<=35){ 
    cout<<num[i]<<" "<<i<<endl;
    
        }}
    
}