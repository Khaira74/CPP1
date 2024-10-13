// public private protected
// by default private
// private=== can only be accesed inside class not outside classs
#include<iostream>
using namespace std;
class jatt{
    public: // if private then error below in int main
    int value;
    char hlo;
};
int main(){

    // cerating object
    jatt ok;
    // using (((((.))))) for using objects in class
    cout << "here it is" << ok.value << endl;
    cout << "here it is" << ok.hlo << endl;

    return 0;
/// itt will give the size of interger == 4 bytes
//// if emty class then 1 value came

}