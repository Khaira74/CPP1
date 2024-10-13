//// merge sorted arrays

#include<iostream>
using namespace std;
void print(int arr3[],int )
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int i=0;
    int k=0;
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

}
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<=n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<=n2;i++){
        cin>>arr2[i];
    }
    int n3=n1+n2
    int arr3[n3];
}