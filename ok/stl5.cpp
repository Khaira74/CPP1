// set
#include<iostream>
#include<set> 
using namespace std;
int main(){
    set<int> a;
    a.push(2);
    a.push(5);
    a.push(6);
    a.push(2);
    for(int i:a){
        cout<<i<<endl;/// it gives 2 5 6 not 2 5 6 2
    }
    set <int> iteration it=a.begin;
    it++;
    a.erase(it)
    cout<<a.count(5)<<endl;// it checks wether present or not
    


}