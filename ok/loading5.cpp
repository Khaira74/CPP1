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
    marks operator++(){
        marks temp;
        temp.mark=++mark
        return temp;
    }
    void operator++(int){
        mark++;
    }
};
int main(){
    marks arsh;
    marks yash;
    arsh.print;
    arsh++;
    arsh.print;}
    yash=++arsh;