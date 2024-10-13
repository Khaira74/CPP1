// merge sorted vector or arrya
#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[],){
    int i=0;
    int j=0;
    int k=0;
    while(i<n &&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
int main(){
    int hlo[5]={1,2,3,4,5};
    int jlo[5]={2,3,4,5,6};
    int klo[10];
}
} 