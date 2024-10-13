// declaring
int topu[5];
int array[5]={1,3,4};




// accessing elements
cout  <<array[2]<<  endl;



//printing full array
int folu[100];
int n=100;
for(int i=0;i<n;i++){
    cout<<folu[i]<<endl;
}



// printing with fxn
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<int arr[]<<endl;
    }
}
print(folu,100);
/// any changs in array made in in fxn will affect the values on main function as unlik variables arrays give
///// true, orignal addreses of bocks of arrays to be used in fxn not the copy of blocks of arrays