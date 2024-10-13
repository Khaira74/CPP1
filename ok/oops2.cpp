// inhertance ambiquity

#include<iostream>;
using namespace std;
class a{

    void speak(){
        cout<<"yes"<<endl;
    }
};
class b{
    void speak(){
        cout<<"no"<<endl;
    }
}
class c:public a,public b{
}
int main(){
    c object;
    object.speak();///// it gives confuisuon asboth parents have same fxn name
       // so now
    object.a::speak();//// solution herer
    
}
