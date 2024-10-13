// getter shetter//// uswd for private

#include<iostream>
using namespace std;
class jatt{
    private:
    int value;
    public:
    char hlo;
    int getValue(){
        return value;
    }
    char getHlo(){
        return hlo;
    }
    void setHlo(char ch){
        hlo = ch;

    }
    void setValue(int h){
        value=h;

    }

};
int main(){

    // cerating object                    
    jatt ok;
    ok.setvalue(77)
    ok.hlo='ABCD'
    // using (((((.))))) for using objects in class
    cout << "here it is" << ok.getValue() << endl;
    cout << "here it is" << ok.getHlo() << endl;

    return 0;
}
