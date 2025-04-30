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
    int max=arr[0];
    for(i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }


}
int smax=arr[0];
cout<<"Max is the:"<<max<<endl;
  for(i=1;i<n;i++){
        if(arr[i]!=max&&smax<arr[i]){
         smax=arr[i];
        }
}
cout<<"Max is the:"<<smax<<endl;}
