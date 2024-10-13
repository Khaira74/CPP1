//////  GET MAX OR MIN

#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]> max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int array[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<getmax(array,size)<<endl;

}