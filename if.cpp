#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=2;
    if((a=2)==b){
        cout<<"a";

    }
    else{
        cout<<a-1;
        
    }
    int n;
    int sum=0;
    cin>>n;
    int i=1;
    while(i<n){
         sum=sum+i;
        cout<<"the sum is :"<<sum;
        i=i+1;
    }
cout<<"the sum is :"<<sum;

}