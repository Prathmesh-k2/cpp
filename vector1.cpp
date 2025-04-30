#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int >v(5);
    for(int i=0; i<5;i++){
        cin>>v[i];
    }
    for(int i=0; i<5;i++){
        cout<<v[i];
    }
    int x;
    cout<<"Enter the x";
    cin>>x;
    int ide=-1;
    for(int i=0; i<5;i++){
        if(v[i]==x) ide=i;
    }
    cout<<ide;

}