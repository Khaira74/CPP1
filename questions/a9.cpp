// rotate the array
void rotate(vector<int>& num,int k){
    vector<int> temp(num.size);
    for (int i=0;i<temp.size;i++){
         temp[(i+k)%num.size()]=num[i]///// vlues taken from num and used in temp 
    }
    num=temp;/// here temp values puteed in num again
}