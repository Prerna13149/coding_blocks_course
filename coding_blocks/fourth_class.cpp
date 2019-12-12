#include<iostream>
using namespace std;
// int main(int argc, char const *argv[])
// {
// 	int N;
// 	cin>>N;
// 	int line = 1;
// 	while(line<=N){
// 		int ele =1;
// 		int ct = 1;
// 		while(ct<=line){
// 			cout<<"*";
// 			ct++;
// 		}
// 		cout<<" ";
// 		ct = 1;
// 		while(ct<=(N-line+1)){
// 			cout<<"*";
// 			ct++;
// 		}
// 		cout<<" ";
// 		ct = 1;
// 		while(ct<=(N-line+1)){
// 			cout<<"*";
// 			ct++;
// 		}
// 		ct = 1;
// 		cout<<" ";
// 		while(ct<=(line)){
// 			cout<<"*";
// 			ct++;
// 		}
// 		//ct = 1;

// 		cout<<"\n";
// 		line++;
// 	}
// 	return 0;
// }

//Find the number that occurs only once
// int main(void){
// 	int N;
// 	cin>>N;
// 	int res = 0;
// 	for(int i=1;i<=N;i++){
// 		int num;
// 		cin>>num;
// 		res = res ^ num;
// 		cout<<res<<"\n";
// 	}
// 	cout<<"\n";
// 	cout<<"Result: "<<res<<"\n";
// }


//COunt char till u encouter a $
// int main(void){
// 	int num=0;
// 	char ch;
// 	while(1){
// 		//cin>>ch;
// 		ch = cin.get();
// 		if(ch=='$'){
// 			cout<<num<<endl;
// 			return 0;
// 		}
// 		num++;
// 	}
// }


//COunt char till u encouter a $
// int main(void){
// 	int num=0;
// 	char ch;
// 	int spaces = 0;
// 	int digits = 0;
// 	int endline = 0;
// 	int chars = 0;
// 	int alpha = 0;
// 	int others = 0;

// 	while(1){
// 		//cin>>ch;
// 		ch = cin.get();
// 		if(ch=='$'){
// 			cout<<"spaces: "<<spaces<<endl;
// 			cout<<"digits: "<<digits<<endl;
// 			cout<<"endline: "<<endline<<endl;
// 			cout<<"alpha: "<<alpha<<endl;
// 			cout<<"others: "<<others<<endl;
// 			return 0;
// 		}
// 		else if(ch ==' '){
// 			spaces++;
// 		}
// 		else if(ch>='0' && ch<='9'){
// 			digits++;
// 		}
// 		else if(ch=='\n'){
// 			endline++;
// 		}
// 		else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
// 			alpha++;
// 		}
// 		else{
// 			others++;
// 		}

// 		//num++;

// 	}
// }


// int main(int argc, char const *argv[])
// {
// 	int x = 0;
// 	int y = 0;
// 	char ch='a';
// 	while(ch!='\n'){
// 		ch=cin.get();
// 		if(ch=='N'){
// 			y++;
// 		}
// 		else if(ch=='S'){
// 			y--;
// 		}
// 		else if(ch=='E'){
// 			x++;
// 		}
// 		else if(ch=='W'){
// 			x--;
// 		}
// 		else{

// 		}

// 	}
// 	//cout<<y<<"\n";
// 	//cout<<x<<"\n";
// 	char dir;
// 	char dir2;
// 	if(x>=0 && y>=0){
// 		dir = 'E';
// 		dir2 = 'N'; 
// 		while(x>0){
// 			cout<<"E";
// 			x--;
// 		}
// 		while(y>0){
// 			cout<<"N";
// 			y--;
// 		}
// 	}
// 	else if(x>=0 && y<=0){
// 		dir = 'E';
// 		dir2 = 'S';
// 		while(x>0){
// 			cout<<"E";
// 			x--;
// 		}
// 		while(y<0){
// 			cout<<"S";
// 			y++;
// 		}
// 	}
// 	else if(y>=0 && x<=0){
// 		dir = 'N';
// 		dir2 = 'W';
// 		while(y>0){
// 			cout<<"N";
// 			y--;
// 		}
// 		while(x<0){
// 			cout<<"W";
// 			x++;
// 		}
// 	}
// 	else{
// 		dir = 'S';
// 		dir2 = 'W';
// 		while(y<0){
// 			cout<<"S";
// 			y++;
// 		}
// 		while(x<0){
// 			cout<<"W";
// 			x++;
// 		}
// 	}
// 	cout<<endl;
// 	//cout<<dir<<dir2<<endl;
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int a[1000];
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	int a[100];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		/* code */
	}
	int k;
	cin>>k;
	int i;
	for (i = 0; i < n; ++i)
	{
		if(a[i]==k){
			cout<<"Found it: "<<i;
			break;
		}

		/* code */
	}
	if(i==n){
		cout<<"NOt found"<<"\n";
	}
	return 0;
}