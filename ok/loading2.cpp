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
        mark+=1;
    }
    freind marks operator--(marks&)
}
marks operator--(marks &m){
    m.mark-=1;
}
int main(){
    marks arsh;
    arsh.print;
    arsh++;
    srsh.print;
}