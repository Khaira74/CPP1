// reverse arrays


#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap (arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int array[10]={1,2,3,4,5,7,8,9,0,6};
    int size;
    print(array,10);
    reverse(array,10);


}