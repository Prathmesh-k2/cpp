#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age";
    cin>>age;
    if(age>15){
        cout<<"you can vote";
    }
    else{
        cout<<"ypu cannot vote";
    }
    switch(age)
    {
        case 12:
        cout<<"you are 12";
        break;
        
        case 18:
        cout<<"you are 18";
        break;
        
        default :
        cout<<"you are ";
        break;

    }
}