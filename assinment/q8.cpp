// find missing
// find duplicaet
#include<iostream>
using namespace std;
void missing(int arr[],int n){
    for(int i=0;i<=n;i++){
        if(arr[i+1]-arr[i]!=1){
            cout<<arr[i]+1<<endl;
            break;
        }
    }
    
}
int main(){
    int arr[5]={1,2,3,5,6};
    missing(arr,5);

}