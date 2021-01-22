#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double mat[][N]){
	for(int i =0 ; i<N ; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0;j<N;j++){
			cin>>mat[i][j];
		}
	}
}

void findLocalMax(const double mat[][N], bool x[][N]){
	for(int i =0; i<N;i++){
		for(int j=0; j<N ; j++){
				x[i][j]=0;
		}
	}
	for (int k = 1; k < N-1; k++){
		for (int l = 1; l < N-1; l++){
			if(mat[k][l]>=mat[k - 1][l] && mat[k][l] >= mat[k][l + 1] && mat[k][l] >= mat[k + 1][l] && mat[k][l] >= mat[k][l - 1]){
				x[k][l] = 1;
			}
		}
	}

}

void showMatrix(const bool mat[][N]){
	for(int i =0 ; i<N ; i++){
		for(int j = 0 ; j<N; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}