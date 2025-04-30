#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price";
    int sp;
    cin>>sp;
    if(cp<=sp){
        cout<<"Profit: "<<sp-cp;
        
    }
    else{
        cout<<"Loss : "<<cp-sp;
    }
}
