/// operator overloading (+=,-=)
#include<iostream>
using namespace std;
class marks{
    int mark;
    public:
    marks(){
        mark=0;
    }
    void marks(int m){
        int m=mark;
    }
    void print(){
        cout<<mark<<endl;
    }
    void operator+=(int bonus){   // here we dont put(((marks m))) as parameter as itis taken automatically as it is part 
        mark=mark+bonus;                    
    }
    friend void operator-=(marks &,int bonuses);

}
void operator-=(marks &m,int bonuses){
    curObj.mark-=bonuses;
}
int main(){
    marks arsh(33);
    arsh+=20;
    arsh.print();

}