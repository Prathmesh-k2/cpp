#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n,m;
    cout<<"Enter the number of row and column";
    cin>>n>>m;
    for(i=1 ;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
    for(i=1 ;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
     cout<<endl;
    
    for(i=1 ;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
     cout<<endl;
      for(i=1 ;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<(char(j+64));
        }
        cout<<endl;
    }
     cout<<endl;
     //odd num& even alphabet tringal
      for(i=1 ;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0)cout<<(char(j+64));
            else cout<<j;
            
        }
        cout<<endl;
    }
       cout<<endl;   cout<<endl;
      for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0||i==m-1||j ==n-1){
                cout<<"*";
            }
            else cout<<" ";

        }
        cout<<endl;
    }
     cout<<endl; cout<<endl;
    
     for(i=1 ;i<=n;++i){
        for(j=1;j<=i-1;++j){
            cout<<" ";
        }
        for(int k=0;k<n;k++){
            cout<<"*";
        }
        cout<<endl;

    }
}