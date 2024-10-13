//deque  = we can perform both pop and push back at front and back of vwctor or array
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>a;
    a.push_back(2);
    a.push_front(5);
    a.pop_back();
    a.pop_front();
    a.erase(a.begin,a.begin+1);// delets 1st element

}