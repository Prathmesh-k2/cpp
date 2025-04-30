#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    
    return f;
}
int main(){
    int num;
    cout<<" Enter the number :";
    cin>>num;
    cout<<fact(num);
}
