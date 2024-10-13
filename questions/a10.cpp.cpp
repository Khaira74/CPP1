/// check if sorted and rotated
bool check(vector<int>& num){
    int count=0;
    for(int i=0;i<=num.size;i++){
        if(num[i-1]>num[i]){
            count++;
        }
    }
    if (num[n-1]>num[0]){
        count++;
    }
    return count<=1;
}