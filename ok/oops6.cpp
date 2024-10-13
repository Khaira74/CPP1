  // virtual base class
#include<iostream>
using namespace std;
// student -->test
// student-->sports
//test-->rsult
//sports-->result
class student{
    protected:
    int roll;
    public:
    void setnumber(int a){
        roll= int a;
    }
    void printno(){
        cout<<roll<<Endl;
    }
};
class test: virtual public student(){
    protected:
    float maths;
    public:
    void setmarks(float b){
        maths= b;
    }
    void printmarks (){
        cout<<maths<<Endl;
    }
};
class sports: virtual public student{
    public:
    float score;
    void setscore(float d){
        score = d;
    }
    void printscore(){
        cout<<score<<endl;
    }
}
class result: public test,public sports{
    float total:
    public:
    total=score+maths;
    void display(){
        cout<<total<<endl;
        printno();
        printmarks();


    }

};
int main(){
    result hlo;
    hlo.setno(44);//// parameters for student
    hlo.setmarks(45);     /// paamterer for test
    hlo.setscore(33);
    hlo.display;

}