#include<iostream>
#include<exception>
int main(){
    int a=10;
    int b=0;
    int c;
    try{
    if(b==0)
        throw"devide by zero error";
    c=a/b;
    cout<<c<<endl;
    }
    catch(const char * e){
    cout<<"exception occured"<<endl<<e ; 
    }
    return 0; 
}