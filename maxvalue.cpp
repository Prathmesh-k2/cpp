#include<iostream>
#include<string>
using namespace std;

int main(){
    string a[]={"0123","0023", "427","00185","8456"};
    int max=stoi(a[0]);
    for(int i=0;i<5;i++){
        int x=stoi(a[i]);
        if(x>max){
          max=x;
        }

    }
    cout<<max;


}