// finding how many times occured
#include<iostream>
using namespace std;
int howmany(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[7]={1,2,3,4,5,5,5};
    cout<<howmany(arr,7,5)<<endl;
}