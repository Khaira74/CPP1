/// search in matrix (unsorted so no binary search)
bool search(vector vector<int>&matrix, int target){
    int row=matrix.size;
    int col=row[0].size;
    rowindex=0;
    colindex=col-1;
    while(rowindex<row && colindex=0){
        int element=matrix[rowindex][colindex];
        if(element==target){
            return 1;
        }
        if(element<target){
            rowindex--;
        }
        else{
            colindex++;
        }
    }return 0
};