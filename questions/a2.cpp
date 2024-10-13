// find unique if other rest are elements are presenr twice 
#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans=ans^arr[i];  /// using here (^ XOR gate ) when both elemnts same it gives 0 and when uniqu gives that element 
        
    }
    return ans;
}
int main(){
    int hlo[7]={4,4,5,6,6,5,2};
    cout<<unique(hlo,7);
    

}