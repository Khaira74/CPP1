////linear search
#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;

        }
    }
    return 0;

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cin >>key;
    search(arr,10,key);
    if(found){
        cout<<presennt<<endl;
    }
    else{
        cout<< not presesnt<<endl
    }

}