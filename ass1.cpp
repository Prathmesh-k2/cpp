#include<iostream>
#include<math.h>
using namespace std;

int square(int n){
    return n*n;
}
float areacircale(float radius){
    return 3.14*radius*radius;

}
int countnum(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
        
    }
return count;
}


int main(){
    float n;
    cout<<"Enter the number";
    cin>>n;
   // for(int i=0; i<=n;i++){
      //  cout<<square(i);
       // cout<<endl;
   // }
    //cout<<areacircale(n);
 cout<<" the num digit is :"<<countnum(n);

}