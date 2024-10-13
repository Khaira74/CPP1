// no of ways to climb the stairs if we can go only 1 step or 2 steps
//fibonachi
#include<iostream>
using namespace std;
int stairs(int nStairs){
    if (n==0){
        return 1;// one way to be at 0 is jumping on 0th stair measn 1 
    }
    if (n<0){
        return 0;
    }
    int ans= nStairs(n-1) +  nStairs(n-2);/// countig and seeing how we reached on top aat last step like fibonachi
    return ans;
}
int main(){
    int a;
    cin>>a;
    cout<<stairs(a)<<endl;
}