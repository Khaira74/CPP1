// finding lenght of char arrays
#include<iostream>
using namespace std;
int lenght(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<lenght(name)<<endl;
}
/// reversing
/// samea as in arrays using SWAPING***