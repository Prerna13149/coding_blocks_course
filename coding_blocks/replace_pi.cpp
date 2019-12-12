#include<iostream>
#include<cstring>
using namespace std;

void replacePi(char ch[1000], char out[1000], int i, int n, int *count){
	if(i>(n-1)){
		int a  = *count;
		//cout<<a<<"\n";
		for (int k = 0; k < a; k++)
		{
			//cout<<"inside here"<<"\n";
			cout<<out[k];
			/* code */
		}
		return;
	}
	//cout<<"here"<<"\n";
	if(ch[i]=='p' && ch[i+1]=='i'){
		out[*count] = '3';
		out[*count+1] = '.';
		out[*count+2] = '1';
		out[*count+3] = '4';
		*count = *count + 4;
		i = i +2;
	}
	else{
		out[*count] = ch[i];
		*count = *count + 1;
		i = i+1;
	}
	replacePi(ch, out, i, n, count);
	return;
}
int main(int argc, char const *argv[])
{
	char ch[1000];
	char out[1000];
	int test;
	cin>>test;
	cin.get();
	int i=0;
	while(i<test){
		cin>>ch;

		//cout<<ch<<"\n";
		int n = strlen(ch);
		int count=0;
		replacePi(ch, out, 0, n, &count);
		cout<<"\n";
		i++;
	}
	
	return 0;
}
