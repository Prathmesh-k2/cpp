#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of element :";
    cin>>n;
    int arr[n];
    int i;
    cout<<"Enter the array element:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int product=1;
    ;
    for(i=0;i<n;i++){
        product=product*arr[i];
}
cout<<"The priduct is:"<<product;
return 0;
}