#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
double A[N][N] = {1,0,1,0,1,5,8,3,0,2,1,4,1,2,1,1,0,4,4,1,0,7,2,3,1};
	bool B[N][N];
	findLocalMax(A,B);
	showMatrix(B);
	return 0;
}

void showMatrix(const bool a[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void findLocalMax(const double a[][N],bool b[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==0||i==N-1){
                b[i][j]=0;
            }
            else if(j==0||j==N-1){
                b[i][j]=0;
            }
            else{
                b[i][j]=0;
                if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]){
                    b[i][j]=1;
                }
            }
            
            
        }
    }
}

