// checking palindrome  where s=S[[[[[ small character= big character]]]]]
//// checking for palindrome
#include<iostream>
using namespace std;
char changeletter(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool plaindrome(char arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(changeletter(arr[start])!=changeletter(arr[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
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
    int len= lenght(name);
    cout<<lenght(name)<<endl;
    cout<<plaindrome(name,len)<<endl;
}