/// shifting all  zeroes to the left
void move(vector<int>& nums){
    int nonzero=0
    for(inti=0;i<=nums.size;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[nonzero]);
            nonzero++;
        }
    }
}