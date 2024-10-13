//binary search
#include<iostream>
using namespace std;
bool binary(int arr[],int start,int end,int key){
    if(start>=end){
        return false;
    }
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return true;
    }
    if(key>arr[mid]){
        return binary(arr,mid+1,end,key);
    }
    else{
        return binary(arr,start,mid-1,key);
    }
}
int main(){
    int arr[6]={1,44,66,88,89,99};
    int size=6;
    int key=89;
    bool hlo=binary(arr,0,5,89);
    if(hlo){
        cout<<"yes<<"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}