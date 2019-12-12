#include<iostream>
#include<cstring>
using namespace std;

void pushX(char ch[], char out[], int *count, int n, int i, int p){
	if(i==n){
		for(int k=0;k<n;k++){
			if(k<(n-*count)){
				cout<<out[k];
			}
			else{
				cout<<"x";
			}
		}
		return;
	}
	if(ch[i]=='x'){
		*count = *count + 1;
	}
	else{
		out[p] = ch[i];
		p++;
	}
	pushX(ch, out, count, n, i+1, p);
	return;
}
int main(int argc, char const *argv[])
{
	char ch[1000];
	char out[1000];
	int count=0;
	cin>>ch;
	int n = strlen(ch);
	pushX(ch, out, &count, n, 0, 0);
	return 0;
}