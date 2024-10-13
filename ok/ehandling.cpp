#include<iostream>
#include<exception>
int main(){
    int a=10;
    int b=0;
    int c;
    c=a/b;
    cout<<c<<endl;///// this gives error  as 0 comes
    return 0; 
    

}
/// so now we do this 
#include<iostream>
#include<exception>
int main(){
    int a=10;
    int b=0;
    int c;
    try{
        if(b==0){
            throw"devide by zero error";
        }
    c=a/b;
    cout<<c<<endl;
    }
    catch(const char * e){
    cout<<"exception occured"<<endl<<e ; 
    }
    return 0; 
}
    
