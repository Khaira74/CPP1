#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap (arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int array[10]={1,2,3,4,5,7,8,9,0,6};
    reverse(array,9);


}