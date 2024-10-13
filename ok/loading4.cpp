//operators overloading(++,--)
#include<iostream>
using naempsace std;
class marks{
    int mark;
    public:
    marks(){
        mark=0;
    }
    void marks(int m){
        mark=int m;
    }
    void print(){
        cout<<mark<<endl;
    }
    void operator++(){
        ++mark;
    }
    void operator++(int){
        mark++;
    }
};
int main(){
    marks arsh;
    arsh.print;
    arsh++;
    arsh.print;}