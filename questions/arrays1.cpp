// swap the alternative elememnets
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0,i<=n,i++){
        cout<<arr[i]<<endl;
    }
}
void swap(int arr[],int n){
    for(int i=0,i<=n,i++){
        if(i%2==0){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6]={3,7,5,1,9,8};
    swap(arr,6);
    print(arr,6);


}