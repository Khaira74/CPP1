// deconstructor
//deep copy
// copy constructors


#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    char *name;
    hero(){
        cout<<"new"<<endl;
        char name=new cahr[100];
    }
    /// parameterized constructor 
    hero(int health){
        cout<<this<<endl;
        this -> health = health; 
    }

    hero(int health,char level){
        this -> health=health;
        this-> level=level;
    }
    // copy constructor
    hero(hero &jho)///////////////{ RATTA & WALA RATTA IN COPY    JHO IS FOR THE OLD OBJECT FROM WHICH WE COPIED
                                                         //// HERO IS DATATYPE
        this->level=jho.level
        this -> health = jho.health; 
    }
    void print(){
        cout<<this-->level<<endl;
        cout<<this-->name<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;

    }
    void setName(char name){//// imp also
        strspy(this->name,name)
    }
    ~hero(){    ////////////////////////////////// DESCTRUCTOR 
        cout<<"destructor called"<<endl;
    }
};
int main(){
    hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('d');
    char name[7]="arshkha"
    hero1.setName(name);
    hero1.print();/////    gives-->arshkha
    hero hero2(hero1);
    hero2.print();/////gives--> arshkha
    hero1.name[0]="p";
    hero1.print();/// it gives --> prshkha
    heo2.print();//// it gives --> prshkha    ?????? due to shallow copy
}