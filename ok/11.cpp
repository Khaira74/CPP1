// static keywords
// copy constructors


#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    static int timeComplete;///////         (((((((independt of object ,other datatypes||| eg in gaem time remain same )))))))
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
        cout<<level<<endl;
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

// declearign / instialaizing Static keyword
int hero ::timeComplete=5;

int main(){

    cout<<hero::timeComplete<<ednl;/// no neeed of object
                                  ///// static fxn onlyu takes static int as input or to return 
}    