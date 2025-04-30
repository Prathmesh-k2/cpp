#include<iostream>
using namespace std;
int main(){
   /*   int n,m;
    cout<<"Enter the row";
    cin>>n;
    cout<<"Enter the row";
    cin>>m;


  for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        cout<<"*";
        }
        cout<<endl;
    }
      for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
        cout<<j;
        }
        cout<<endl;
    }//star triangle*/

      for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
        cout<<"*";
        }
        cout<<endl;
    }
        cout<<endl;
    //star triangle revers
    
      for(int i=1;i<5;i++){
        for(int j=1;j<5+1-i;j++){
        cout<<"*";
        }
        cout<<endl;
    } 
        cout<<endl;
     cout<<endl;
    //num triangle
      for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
        cout<<j;
        }
        cout<<endl;
    }
     // odd num triangle
      for(int i=1;i<=4;i++){
        for(int j=1;j<=2*i;j+=2){
        cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
     // alphabet square
      for(char i='A';i<='D';i++){
        for(char j='A';j<='D';j++){
        cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
     // star plus
     int n=5;
     int mid=n/2+1;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid||j==mid){
        cout<<"*";
            }
            else cout<<" ";}
        cout<<endl;
    }
    cout<<endl;
     //  cross star plus

      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==6){
        cout<<"*";
            }
            else cout<<" ";}
        cout<<endl;
    }
    cout<<endl;
        cout<<endl;
        //floydtriangle
        int k=1;
         for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
        cout<<k <<" ";
        k++;
        }
        
        cout<<endl;
}
cout<<endl;
  for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)cout<<1;
            else
        cout<<0;
        
        }
        cout<<endl;
}
 cout<<endl;
for(int i=1;i<=5;i++){
        for(int j=1;j<=n-1;j++){
        cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
