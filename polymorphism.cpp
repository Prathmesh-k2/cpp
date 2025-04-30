#include<iostream>
using namespace std;
class Print {
    public :
     void show(int x){
        cout<<"int"<<x<<endl;

     }
     void show (string x){
        cout<<"string "<<x<<endl;
     }

};
int main (){
    Print s;
    s.show(55);
    s.show("hii");
}