#include<iostream>;
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
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
        health=h
    }
    void setLevel(char ch){
        level=ch;

    }


}
int main(){
    hero a;
    hero *b=new hero;
    //static
    cout<<a.level<<endl;
    cout<<a.getHealth()<<endl;
    //dynamic
    cout<<(*b).level<<endl;
    cout<<(*b).getHealth()<<endl;
           //orr
    cout<<b->level<<endl;
    cout<<b->getHealth()<<endl;       
}