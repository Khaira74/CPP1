// remove the duplicate

#include<iostream>
using namespace std;
int remove(int arr[],int n){
    if(n==0 || n==1){
        return n;
    }
    int temp[n]
    int j=0;
    for(int i=0;i<=n;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++]=arr[i];
        }
    }
    temp[j++]=arr[n-1]
    for(int i=0;i<j;i++){
        arr[i]=temp[i];
    }






}
int main(){
    int arr[5]={1,2,3,5,6};
    missing(arr,5);

}