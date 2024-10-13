// factorail
#include<iostream>
using namespace std;
int recursion(int n){
    //base condition
    if(n==0){
        return 1;
    }
    //processing
    int small= factorial(n-1);
    int big= n * small;
    //recursive call
    return big;

}
int mian(){
    int hlo=8;
    cin>>hlo;
    int op=recursion(hlo);

}