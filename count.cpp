#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  /* string  name ="prathmeeesh";
    int count=0;
    int max =0;
    int len=name.length ();
    for(int i=0; i<len; i++){
        char name[i];
        count =1;
        for(int j=i+1; j<len; j++){
            if(name[i]==name [j]){
                count ++;
            }
                if(max<count ) max=count;
            
        }
        

    
    }
    cout<<max;*/

    string s= "leetcode";
       vector<int>arr(26,0);
  for(int i=0;i<s.length();i++){
    char ch =s[i];
    int ascii=(int )ch;
    arr[ascii-97]++;
  }
  int max =0;
  for(int i=0; i<26;i++){
    if(arr[i]>max ) max =arr[i];

  }
  for (int i=0; i<26; i++){
    if(arr[i]==max){
        int ascii=i+97;
        char ch =(char)ascii ;
        cout<<ch<< "  "<<max<<endl;    }
  }


}