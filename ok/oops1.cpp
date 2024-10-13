/// inhertance
#include<iostream>
using namespace std;
class human{
    public:
    int weight;
    int height;
    int age;
    public:
    int getAge(){
        return this-->age;
    }
    void setweight(int w){
        this-->weight=w;  
    } 
};
class Male: public human{// // first child class name then mode then parent class
    string color;
    void h(){
        cout<<"yes"<<endl;
    }
}
int main(){
    Male obj1;
    cout<< Male.age<<endl;//// as male enherited so it can acces datatypes of human****
    cout<< Male.height<<endl;
    cout<< Male.weight<<endl;

}

}