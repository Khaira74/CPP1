/// virtual fxn/// run time polymorphosis
#include<iostream>
#include <cstring>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){

    }
};
class CWHVideo:public CWH{
    float videoLength;
    public:
    CWHVideo(string s,float r,float vL):CWH(s,r){////// to use copy constructor of CWH
        vL=videoLength;
    }
    void display(){
        cout<<"hlo"<<title<<endl;
        cout<<"jlo"<<rating<<endl;
        cout<<"mlo"<<videoLength;

    }
};
class CWHText:public CWH{
    int word;
    public:
    CWHText(string s,float r,int wc):CWH(s,r){
        word=wc;
    }
    void display(){
        cout<<"how"<<title<<endl;
        cout<<"chlo"<<rating<<endl;
        cout<<"bola"<<word<<endl;

    }
};
int main(){
    string d="ch";
    float r=4.3;
    float vL=4.3;
    int wc=66;

    CWHText hlo(d,r,wc);
    hlo.display();


}