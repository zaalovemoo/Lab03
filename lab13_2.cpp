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

void inputMatrix(double A[][N])
{
	for(int i=0;i<N;i++)
	{
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++)
		{
			cin >> A[i][j];
		}
	}
}

void findLocalMax(const double A[][N], bool B[][N])
{
		for(int i=1;i<N-1;i++)
		{
			for(int j=1;j<N-1;j++)
			{
				if(A[i][j]>=A[i-1][j] && A[i][j]>=A[i][j-1] && A[i][j]>=A[i+1][j] && A[i][j]>=A[i][j+1])
					B[i][j] = true;
				else
					B[i][j] = false;
			}
		}
		
		B[0][0]=0;
		B[0][N-1]=0;
		B[N-1][0]=0;
		B[N-1][N-1]=0;	
}

void showMatrix(const bool B[][N])
{	
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			if(B[i][j]==true){
				cout<<1<<" ";
			}
			else{
				cout<<0<<" ";
			}
		}
		cout<<"\n";
	}

}