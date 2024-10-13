
//// checik is sorted or not

#include<iostream>
#include<climits>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining=isSorted(arr+1,size-1);
        return remaining;
    }

}
int main(){
    int arr[]={15,4,3,7,8,1};
    bool hlo=isSorted(arr,6);
    if(bool){
        cout<<"yes"<<endl
    }
}