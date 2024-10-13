///find majority element
#include<iostream>
using namespace std;
void majority(int arr[],int n){
    int maxcount=0
    int index=-1
    for(int i=0;i<=n;i++){
        int count=0;
        for(intj=0;j<=n;j++){
            if(arr[i]=arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            count=maxcount;
            index=i;
        }

    }if(maxcount>n/2){
        cout<<arr[index]<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}