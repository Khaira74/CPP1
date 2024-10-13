//find  duplicate in array  in cpp
#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=ans^arr[i];  /// using here (^ XOR gate ) when both elemnts same it gives 0 and when uniqu gives that element 

    }
    for(i=1;i<=n;i++){
        ans=ans^i
    }
    return ans;
} 