#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element :";
    cin>>n;
    int arr[n];
    int i;
    cout<<"Enter the array element:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int data ;
    cout<<"Enter the to find data:";
    cin>>data;
    bool flag=false;
    for(i=0;i<n;i++){
        if(arr[i]==data)flag=true;

}
if(flag==true){
        cout<<data<<" data is found :"<<i;}
else{
    cout<<"data is not present:";
}
}
