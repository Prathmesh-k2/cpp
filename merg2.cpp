#include<iostream>
using namespace std;
int merge(int a[],int b[],int n,int m){
    int i=0, j=0,k=0;
   int  f=m+n;
    int c[f];
    while(i<n&&j<m){
    if(a[i]<b[j]){
     c[k]=a[i];
     i++;
    }
    else{
        c[k]=b[j];
        j++;
    }
    k++;
}
while (i < n) {
    c[k] = a[i];
    i++;
    k++;
}

// Add remaining elements of array b[], if any
while (j < m) {
    c[k] = b[j];
    j++;
    k++;}
    for(int d=0;d<f;d++){
        cout<<c[d]<<"  ";
    }
    cout<<endl;
    
  
}

int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,12};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    merge(a,b,n,m);

    return 0;
}