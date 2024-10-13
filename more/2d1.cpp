#include<iostream>
using namespace std;
int main(){

    //// initializing 2d array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int hlo[2][2]={{3,4},{5,6}};


    // taking input  row wise
    for(int i=0;i<=5;i++){
        for(int j=0;j<=7;j++){
            cin>>array[i][j];
        }
    }
    /// taking input coloumn wise
     for(int i=0;i<=7;i++){
        for(int j=0;j<=5;j++){
            cin>>array[j][i];
        }
    }
    /// output
     for(int i=0;i<=5;i++){
        for(int j=0;j<=7;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    
}