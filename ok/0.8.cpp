// fibonacci
#include<stdio.h>
using namespace std;
int main(){
    int n=11;
    int a=0;
    int b=1;
    for (int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<endl;
        a=b;
        b=next;
    }
}