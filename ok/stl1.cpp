//contigeus vector

#include<iostream>
#include<arrays> ////// using libraries
using namespace std;
void display(vector<int>&v)
int main(){
    int basic[]={1,2,3,4};
        //// or 
    arrays <int,4> a={1,2,3,4};/// to print static array
    int size=a.size//size
    cout<<a.at(2)<<endl;
    cout<<a.empty()<<endl;/// to cheack wether array emty or not
    cout<<a.front()<<endl;// first element
    cout<<a.back()<<endl;// last element
}