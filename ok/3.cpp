
#include<iostream>
using namespace std;
class jatt{
    public:
    int value;
    char hlo;
};
int main(){

    // cerating object
    jatt ok;
    ok.value=8;
    ok.hlo='okkkk';
    // using (((((.))))) for using objects in class
    cout << "here it is" << ok.value << endl;
    cout << "here it is" << ok.hlo << endl;

    return 0;
/// itt will give the size of interger == 4 bytes
//// if emty class then 1 value came

}