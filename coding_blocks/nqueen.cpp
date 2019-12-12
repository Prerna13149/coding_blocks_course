#include<iostream>
using namespace std;
bool isSafeToPut(int soln[][10], int i, int j, int n){
	for (int k = 0; k < n ; k++)
	{
		if(soln[k][j] || soln[i][k]){//checking horizontally and vertically
			return false;
		}
		/* code */
	}
	int k=i, l=j;
	while(k>=0 && l>=0){//checking diagonally
		if(soln[k][l]){
			return false;
		}
		k--;
		l--;
	}
	while(k >= 0 && l < n){
		if(soln[k][l]){
			return false;
		}
		k--;
		l++;
	}
	return true;

}
bool nqueen(int n, int i, int soln[10][10]){
	if(n==i){
		//reached the last row, print the solution matrix
		for (int p = 0; p < n; p++)
		{
			for (int q = 0; q < n; q++)
			{
				cout<<soln[p][q]<<" ";
				/* code */
			}
			cout<<"\n";
			/* code */
		}
		return true;
	}
	
	for (int k = 0; k < n; k++)//loop for column to find a place to keep the queen
	{
		if(isSafeToPut(soln, i, k, n)){//function to check if it is safe to keep the queen there or not
			soln[i][k] = 1;//safe to put queen
			bool kyaAgeRakhPaya = nqueen(n, i+1, soln);
			//cout<<i;
			if(kyaAgeRakhPaya){
				return true;
			}
			else{
				soln[i][k] = 0;//if we cannot place it at some point in the future
			}
		}
		
		/* code */
	}
	return false;//cannot place in that row
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int soln[10][10];
	nqueen(n, 0, soln);//0=starting row
	return 0;
}