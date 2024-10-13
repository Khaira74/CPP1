//priority queue                       it gives alargest element first always or min elelementt 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;/// give smax heap
    priority_queue<int,vector<int>,greater<int>>mini;/// give smin heap
    maxi.push_back(4);
    maxi.push_back(466);
    maxi.push_back(472);
    maxi.push_back(41);
    maxi.push_back(49);
    int n=maxi.size;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;///// first largest 
        maxi.pop();
    }



}

