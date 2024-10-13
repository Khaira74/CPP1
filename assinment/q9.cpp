// find duplicaet
#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    for(int i=0;i<=n;i++){
        if(arr[i]=arr[i+1]){
            cout<<arr[i]<<endl;
        }
    }
}
int main(){
    int arr[5]={1,2,2,3,4};
    duplicate(arr,5);


}
// find duplicaet
#include<iostream>
using namespace std;
void duplicate(int arr[],int n){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
            }
        }
    }
}
int main(){
    int arr[5]={1,2,2,3,4};
    duplicate(arr,5);


}