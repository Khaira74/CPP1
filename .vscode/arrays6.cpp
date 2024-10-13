void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){// for round 1 to n-1(for every elemnent we have seprate round )
        for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){///here if else loop  continously work tilll elelmnt reachs right place
                swap(arr[j],arr[j+1])
            }
        }
    }
}