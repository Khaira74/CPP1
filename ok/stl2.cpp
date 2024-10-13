/// vector == dynamic array// it creates double the size earlireer
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int>a(5,1)// vector of size 5 and every vector initialize w ith 1
                        //// or all elements are 1
    for(int i:a){
        cout<<i<<endl;
    }

    cout<<v.capacity<<endl;//// capacity=total memory allocated///size = total elements
    
    v.pushback(2);
    cout<<v.capacity<<endl;///-->2
    v.push_back(3);
    
    cout<<v.capacity<<endl;///-->4(2*2)double of previous
    cout<<v.size<<endl;///-->3****
    
    v.pop_back();/// removes last element from array
    
    v.clear();  /// removes all elemenets from veactors
    cout<<v.front()<<endl;
    coit<<v.back()<<endl;



}