#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    cin>>s;
    int i=0;
    int count=0;
    int len= s.size();

    
    for(i = 0; i <len; i++)
{
        if(i==0){
            if(s[i]!=s[i+1]){
                count ++;
            }
            
        }
        else if(i==len-1){
            if(s[i]!=s[i-1]){
                count ++;
            }
        }
    

      else  if(s[i]!=s[i+1]&&s[i]!=s[i-1])
    {
        count++;
    }
}
   
cout<<count;
}