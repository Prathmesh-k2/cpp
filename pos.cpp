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

  while (i<j){
    if(v[i]>0&&v[j]<0){
        int temp=v[i];
      v[i]=v[j];
      v[j]=temp;
    }
    if(v[i]<0) i++;
    if(v[j]>0) j--;
  }
}




int main(){
    vector<int>v;
    v.push_back(-5);
    v.push_back(1);
    v.push_back(-8);
    v.push_back(10);
    v.push_back(-52);
    v.push_back(18);
    v.push_back(-54);
    v.push_back(104);

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