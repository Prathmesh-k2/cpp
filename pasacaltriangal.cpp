#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }

    
    return f;
}
int combanation(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;

}
int main(){
    int num;
    cout<<" Enter the number :";
    cin>>num;
   // cout<<fact(num);
    for(int i=0; i<=num; i++){
        for(int j=0;j<=i;j++){
            cout<<combanation(i,j)<<" ";
        }
        cout<<endl;
    }
}
