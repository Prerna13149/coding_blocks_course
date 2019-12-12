#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	// int N;
	// cin>>N;
	// int ct = 1;
	// int sum = 0;
	// int temp = N;
	// while(temp > 0){
	// 	//int t = temp%10;
	// 	sum = sum + temp%10;
	// 	temp = temp/10;
	// 	ct++;
	// }
	// cout<<sum<<"\n";
	// cout<<(ct-1)<<"\n";




	//Print pattern
	//A
	//A B
	//A B C
	// int N;
	// cin>>N;
	// for(int line = 1; line<=N;line++){
	// 	char ch = 'A';
	// 	for(int ele=1;ele<=line;ele++){
	// 		cout<<ch;
	// 		ch++;
	// 	}
	// 	cout<<"\n";
	// }

	//Print prime between 2 and N
	// int N;
	// cin>>N;
	// int i;
	// for(int num=2;num<=N;num++){
	// 	for (i = 2; i < num; i++)
	// 	{
	// 		if(num%i==0){
	// 			break;
	// 		}
	// 		/* code */
	// 	}
	// 	if(i==num){
	// 		cout<<num<<"\n";
	// 	}

	// }

	//Print reverse of a number
	// int N;
	// cin>>N;
	// int i = N;
	// int ct = 1;
	// while(i>0){
	// 	i = i/10;
	// 	ct++;
	// }
	// int rev = 0;
	// //cout<<ct;
	// int j = 1;
	// while(N>0){
	// 	int t = N%10;
	// 	rev = rev + pow(10, ct-j-1)*t; 
	// 	N= N/10;
	// 	j++;
	// }
	// cout<<rev<<endl;

	//Print pattern
	//1
	//01
	//101
	//0101
	// int N;
	// cin>>N;
	// int var;
	// for (int line = 1; line <=N; line++)
	// {
	// 	if(line%2){
	// 		var = 1;
	// 		}
	// 	else{
	// 		var = 0;
	// 		}
	// 	for (int i = 1; i <= line; i++)
	// 	{
	// 		cout<<var;
	// 		var = 1-var;

	// 	}
	// 	cout<<"\n";
	// 	/* code */
	// }

	// int N;
	// cin>>N;
	// int set_bit = 0;
	// while(N>0){
	// 	int t = N%2;
	// 	if(t==1){
	// 		set_bit++;
	// 	}
	// 	N = N/2;
	// }
	// cout<<(set_bit);

	int N;
	cin>>N;
	int set_bit = 0;
	int mask = 1;
	while(N>0){
		int t = mask & N;
		int j = t%10;
		if(j==1){
			set_bit++;
		}
		N = N>>1;
	}
	cout<<set_bit;

	return 0;
}