#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int count=1;
        while(j<=i){
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

//
///tmp/f0ji8CeEGF.o
8
1
23
345
4567
56789
67891011
78910111213
89101112131415
//
//