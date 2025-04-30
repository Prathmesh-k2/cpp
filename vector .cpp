#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int > arr;
    arr.push_back(10);
    cout<<arr.at(0)<<endl;

    arr.push_back(11);
     cout<<arr.at(1)<<endl;

    arr.push_back(12);
    cout<<arr.at(2)<<endl;

    arr.push_back(16);
    cout<<arr.at(3)<<endl;

    arr.push_back(17);
    cout<<arr.at(4)<<endl;

    arr.push_back(15);
    cout<<arr.at(5)<<endl;

    arr.push_back(120);
    cout<<arr.at(6)<<endl;
}