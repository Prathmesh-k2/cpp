
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){

    string str ;
    getline(cin,str);

    int len =str.length();
    cout<<str<<endl;
    reverse(str.begin(), str.end()+len/2);
    cout<<str;
    cout<<str.substr(len/2);
    cout<<str;
}