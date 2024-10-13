// operaotr overoading(+,-,/,%)
#include<iostream>
using namespace std;
class marks{
    int intmarks;
    int extmarks;
    public:
    marks(){
        intmarks=0;
        extmarks=0;
    }
    marks(int im,int em){
        intmarks=im;
        extmarks=em;
    }
    void display(){
        cout<<intmarks<<extmarks<<endl;
    }
    marks operator+(marks m){
        marks temp;
        temp.intmarks=intmarks+m.intmarks;
        temp.extmarks=extmarks+m.extmarks;
        return temp; 
    }


}
int main(){
    marks m1(20,30);
    marks m2(40,44);
    marks m3=m1+m2 //// for this we crat operator

}
