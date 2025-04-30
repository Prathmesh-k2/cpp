#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[10]={'a','b','c','d','e'};
    for(int i=0;i<5;i++)
    {cout<<a[i]<<endl;
    }
    
    string  name;
    getline(cin,name) ;

    cout<<name<<endl;
    cout<<(int)a[10];
}
