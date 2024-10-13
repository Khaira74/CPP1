// row wise sum
void sum(int arr[][4],int row,int col){
    for(int row;row<3;row++){
        sum=0;
        for(int col;col<=4;col++){
            sum+=arr[row][col];
        }
        cout<<sum;
    }
}
int largestsum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int num=-1
    for(int row;row<3;row++){
        sum=0;
        for(int col;col<=4;col++){
            sum+=arr[row][col];  
        }
        if(sum>maxi){
            maxi=sum;
            num=row
        }

    }
    return row;
}