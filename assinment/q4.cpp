// matirx operators overloading
#include<iostream>
using namespace std;
class matrix{
    int n;
    int arr[row][col];
    public:

    matrix(vector<vector<int>>& A){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                A[i][j]=arr[i][j];
            }
        }
    }
    void matrix display{
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout<<arr[i][j]
            }
        }
    }
    void matric operator+(matrix x){
        matrix temp;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                temp[i][j]=arr[i][j]+x.arr[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                cout<<temp[i][j];
            }
        }
    }
}
int main(){
    vector<vector<int>>A={1,3,3,2};
    vector<vector<int>>B={1,3,3,2};
    matrix m1(A);
    matrix m2(B);
    m1+m2;

}