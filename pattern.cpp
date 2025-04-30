#include<iostream>
using namespace std;

int main(){
int n= 5;
int i,j;
  int count =1;
/*while(i<=n){
    int j=1;
    while(j<=n){
       // cout<< count<<" " ;
        count++;
        j++;
    }
    cout<<" "<<endl;
    i++;
}
for(i=0;i<=n;i++){
    int j;
    int count=i;
    char ch='A'+i-1;
    for(j=1;j<=n;j++){
       // cout<<" * ";
       //cout<<i <<"  ";
       //cout<<j<<"  ";
       //cout<< count <<"  ";
      // count++;
      //cout<<(i-j+1)<<" ";
    //  cout<<ch<<" ";
    }
    cout<<endl;
}*/
char ch='A';
while(i<n){
    
    while(j<n){
        cout<<ch<<" ";
        ch++;
        j++;
    }
    i++;
}

}