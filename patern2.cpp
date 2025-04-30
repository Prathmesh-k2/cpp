#include<iostream>
using namespace std;

int main(){
    int i,j,n,m;
     cout<<"Enter the number of row and column";
    cin>>n>>m;/*
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1; k<=n;k++){
           cout<<"*";
        }
        cout<<endl;
    }
    //odd startriangal
    for(i=1;i<=n;i++){
          for(j=1;j<=n-i;j++){
            cout<<" ";}
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;


}//star pyramid
int nst=1;
int nsp=n-1;
for(i=1;i<=n;i++){
          for(j=1;j<=nsp;j++){
            cout<<" ";}
            nsp--;
        for(j=1;j<=nst;j++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;

}
//num pyramid
for(i=1;i<=n;i++){
    for(int k=0;k<n-i;k++){
        cout<<" ";
    }
          for(j=1;j<=i;j++){
            cout<<j;}
           
    
        
        for(int q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
}
// star diamond
nst=1;
 nsp=n-1;
for(i=1;i<=2*n-1;i++){

          for(j=1;j<=nsp;j++){
            cout<<" ";}
          if(i<=n-1)  nsp--;
          else nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
       if(i<=n-1) nst+=2;
       else nst-=2;
        cout<<endl;

}*/
//star bridge

int q=n-1;
int nsp=1;
for(i=1;i<2*n-1;i++)
{
    cout<<"*";
} cout<<endl;
for(i=1;i<m;i++){
    for(int j=1;j<q+1-i;j++){
        cout<<"*";
    }
    for(int k=0;k<=nsp;k++){
        cout<<" ";
    }
    nsp+=2;
      for(int j=1;j<q+1-i;j++){
        cout<<"*";
    }
    cout<<endl;
}

}