// binary search
bool binary(vector vector<int>& matrix,int target ){
    int row=matrix.size();//// get size of matrixor 2D array
    int col=row[0].size();///// get size of column
    int start=0;
    int end=row*col-1;
    int mid=start +(end-start)/2;
    while(start<end){
        element=matrix[mid/col][mid%col];
        if(element==target){/////// mid/col ==> row  ////mid%col==col
            return 1;
        }
        if(element>target){
            end=mid-1;
        }
        if(element<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
     
}
