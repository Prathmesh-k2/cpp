#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v){
    int o=0; 
    int z=0;
    
    for(int i=0;i<v.size();i++){
        if(v[i]==0) o++;
        else z++;

    
  }
  for(int i=0;i<v.size();i++){
    if(i<o) v[i]=0;
    else v[i]=1;
  }
  cout<<endl;
  cout<<endl;
    


}
void sort02(vector<int> &v){
  int n= v.size();
  int i=0;
  int j=n-1;

  while (i<n){
    
    if(i>j)  break;
    if(v[i]==1&&v[j]==0){
      v[i]=0;
      v[j]=1;
    }
    if(v[i]==0) i++;
    if(v[j]==1) j--;
  }
}




int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
 // sort01(v);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;

  sort02(v);
  for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
   }
   cout<<endl;
 

    return 0;
}