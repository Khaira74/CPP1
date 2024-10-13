#include<iostream>
using namespace std;
bool linear(int arr[],int size,int key){
    if (size==0){
        return false;
    }
    if (arr[0]=key){
        return true;
    }
    else{
        int newarr=linear(arr+1,size-1,key);
        return newarr;
    }



}
int main(){
    int arr[5]={1,3,4,8,9,};
    int size=5;
    int key=8;
    bool ok=linear(arr,5,8);
    if (ok){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}