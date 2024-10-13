// copy constructors


#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
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
                                                         //// HERO IS DATATYPE for object
        this->level=jho.level
        this -> health = jho.health; 
    }
    void print(){
        cout<<this-->level<<endl;
        cout<<this-->health<<endl;
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
};
int main(){
    hero ramesh(10);
    ramesh.print();
    hero samesh(ramesh);
    samesh.print();
    /// both gives same valus
}