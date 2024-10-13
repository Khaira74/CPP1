// selection sort
void selectionSORT(int arr[],int n){
    for(int i=0;i<=n-1;i++){///////   here i refer to rounds and index of elements for selection min and swapping 
        int minindex=i;
        for(int j=i+1;j<=n;j++){
            if( arr[j]<arr[minindex]){
                minindex=j;
        
            }
        }
        swap(arr[minindex],arr[i])
    }
}
int main(){
    int arr[7]={5,4,2,7,6,1,3};
    cout<<selectionSORT(arr,7)<<endl;
}