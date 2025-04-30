#include<iostream>
using namespace std;
class person {
    public :
     string name;
     int age ;

    person(){
         cout<<"base constructor"<<endl;
    }
    ~person(){
        cout<<"base destructir<"<<endl;

    }

};

class child :public person{
     public:
       int roll ;
       child(){
        cout<<"chaild constructor"<<endl;
   }
   ~child(){
       cout<<"chaild destructir<"<<endl;

   }  void getinfo (){
        cout<<" name "<< name <<endl;
        cout<<" age "<< age <<endl;
        cout<<" roll"<< roll <<endl;

   }
};
int main(){
    child s1;
    s1.name="pk";
    s1.age=19;
    s1.roll=85;
    s1.getinfo();

}