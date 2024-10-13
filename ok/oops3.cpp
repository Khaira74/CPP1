// fxn overloading  // polymorphosis
#include<iostream>
using namespace std;
class A{
    public:
    void Hello(){
        cout<<"hello op"<<endl;
    }
    int Hello(){ ////                 //// sameas obove so gives error
        cout<<"hello op"<<endl;
        retun 1;
    }
    void Hello(string name){
        cout<<"hello op"<<name<<endl;
    }
    int Hello(string name){///// same as as above gives error
        cout<<"hello op"<<name<<endl;
        return 1;
    }
    int Hello(string name,int n){
        cout<<"hello op"<<name<<endl;
        return n;
    }

};
int main(){
    A obj;
    obj.Hello;
}
