#include<iostream>
using namespace std;
bool isSafeToPut(int n, int soln[10][10], int i, int j){
	for (int k = 0; k < n; k++)
	{
		if(soln[i][k]||soln[k][j]){
			return false;
		}
		/* code */
	}
	//cout<<"here"<<"\n";
	int k=i;
	int l=j;
	int p=0;
	int q=0;
	while(k>=0 && l>=0){
		if(soln[k][l]){
			//cout<<p<<" "<<l<<"\n";
			return false;
		}
		//cout<<k<<" "<<l<<"\n";
		k--;
		l--;
	}
	k=i;
	l=j;
	//cout<<"right side"<<"\n";
	while(k>=0 && l<n){
		if(soln[k][l]){
			//cout<<p<<" "<<l<<"\n";
			return false;
		}
		//cout<<k<<" "<<l<<"\n";
		k--;
		l++;
	}
	return true;

}
bool nqueen(int n, int soln[10][10], int i, int j){
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<soln[k][l]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		return false;
	}
	
	for (int k = 0; k <n ; k++)
	{
		if(isSafeToPut(n, soln, i, k)){
			soln[i][k]=1;
			bool kyaAaage = nqueen(n, soln, i+1, 0);
			if(kyaAaage){
				return true;
			}
		}
		soln[i][k]=0;
		/* code */
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int soln[10][10]={{0}};
	nqueen(n, soln, 0, 0);
	//isSafeToPut(n, soln, 2, 2);
	return 0;
}