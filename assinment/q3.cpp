//// find k th largest element
#include<iostream>
using namespace std;
int  largest(int arr[],int n,int key){
    sort(arr,arr+n);
    return (arr[n-key]);
}
int main(){
    arr[] = {3,5,1,7,8,18,2,7,18,100};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<largest(arr,n,3)


}
// C++ program to find K'th smallest element
#include<iostream>
using namespace std;
int  largest(int arr[],int n,int key){
    sort(arr,arr+n);
    return (arr[key-1]);//////// here is the main game 
}
int main(){
    arr[] = {3,5,1,7,8,18,2,7,18,100};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=3;
    cout<<largest(arr,n,3)<<endl;


}


