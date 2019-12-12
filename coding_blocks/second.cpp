#include <iostream>
#include <climits>
using namespace std;


int main(){

	//Simple INterest
	// int p;
	// int r;
	// float t;
	// float si;
	// cin>>p>>r>>t;
	// si = (p * r * t)/100;
	// cout<<"Simple Interest: "<<si;

	//Prime NUmber
	// int num;
	// cin>>num;
	// int i = 2;
	// while(i < num){
	// 	if(num%i == 0){
	// 		cout<<"NOt Prime"<<endl;
	// 		return 0;
	// 	}
	// 	i = i + 1;
	// }
	// cout<<"Prime"<<endl;

	//Pattern
	// int max_line;
	// cin>>max_line;
	// int line = 1;
	// int count = 1;
	// while(line <= max_line){
	// 	int i = 1;
	// 	while(i <= line){
	// 		cout<<count;
	// 		cout<<" ";
	// 		count = count + 1;
	// 		i = i + 1;
	// 	}
	// 	cout<<"\n";
	// 	line = line + 1;
	// }

	//Print prime between 2 to N
	// int n;
	// cin>>n;
	// int i = 2;
	// while(i <= n){
	// 	int j = 2;
	// 	while(j < i){
	// 		if(i%j == 0){
	// 			break;
	// 		}
	// 		j++;
	// 	}
	// 	if(j == i){
	// 		cout<<i<<endl;
	// 	}
	// 	i++;
	// }

	//Read N and print the below pattern
	// int max_line;
	// cin>>max_line;
	// int line = 1;
	// int count = 1;
	// while(line <= max_line){
	// 	int sp = 1;
	// 	while(sp <= (max_line-line)){
	// 		cout<<" ";
	// 		sp = sp + 1;
	// 	}
	// 	int ele = 1;
	// 	count = line;
	// 	while(ele <= line){
	// 		cout<<count;
	// 		count = count + 1;
	// 		ele = ele + 1;
	// 	}
	// 	count = count - 2;
	// 	while(count >= line){
	// 		cout<<count;
	// 		count = count - 1;
	// 	}
	// 	cout<<"\n";
	// 	line = line + 1;
	// }

	//Farhenheit
	// int ini;
	// int final;
	// int step;
	// cin>>ini>>final>>step;
	// int val;
	// while(ini <= final){
	// 	val  = (5.0/9)*(ini - 32);//floats are used and then assigned to integer variable
	// 	cout<<ini<<"\t"<<val<<"\n";
	// 	ini = ini + step;

	// }

	//Check uppercase or lower case
	// char ch;
	// cin>>ch;
	// if(ch >= 65 && ch <= 90){//(ch >= 'A' && ch <= 'Z')
	// 	cout<<"Upper case"<<endl;
	// }
	// else if(ch >= 'a' && ch <= 'z'){
	// 	cout<<"lower case"<<"\n";

	// }
	// else{
	// 	cout<<"special char"<<endl;
	// }


	//Perfect Square root --works only for perfect squares
	// int i = 0;
	// int num;
	// cin>>num;
	// while(i*i <= num){
	// 	i = i + 1;
	// }
	// cout<<i-1<<endl;


	//Square root when not a perfect square but we have precision
	int prec;
	cin>> prec;
	int i = 1;
	float step = 1;
	int num;
	cin>>num;
	float j = 0 ;
	float start = 0;
	while(i<=(prec+1)){
		j = start;
		while(j*j<=num){
			j = j + step;
		}
		start = j - step;
		//cout<<start<<" "<<j<<endl;
		step = step/10;
		i++;
	}
	cout<<start<<endl;
	return 0;
}