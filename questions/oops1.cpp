#include<iostream>
using namespace std;
const pi=3.14;
class shape{
    virtual void calculateArea(){
        cout<<"ok"<<endl;
    }


     
}
class circle:public shape{
    int radius;
    public:
    circle(int r){
        r=radius
    }
    void calculateArea(){
        cout<<"area"<<pi*r*r<<endl;
    }


};
class rectangle:public shape{
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void calculateArea(){
        cout<<"area"<<length*breadth
    }

};
int main(){
    circle ok(5);
    ok.calculateArea;
}