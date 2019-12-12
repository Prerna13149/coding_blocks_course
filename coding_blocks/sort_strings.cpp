#include<iostream>
#include<cstring>
using namespace std;
int compare(char ch[], char ch2[]){
	int n1 = strlen(ch);
	int n2 = strlen(ch2);
	int max;
	if(n1<n2){
		max = n1;
	}
	else{
		max = n2;
	}
	int j=0;
	while(j<max){
		if(ch[j]>ch2[j]){
			//cout<<" here";
			return 0;
		}
		else if(ch[j]<ch2[j]){
			return 1;
		}
		else{
			j++;
		}
		
	}
	return -1;
}
void sort(char ch[1000][1000], int n){
	int i=0;
	int j;
	for (int i = 0; i <n ; i++)
	{
		for(int j=0;j<(n-i-1);j++){
			int x = compare(ch[j], ch[j+1]);
			if(x==0){
				swap(ch[j], ch[j+1]);
			}
		}
		/* code */
	}
	for (int i = 0; i < n; i++)
	{
		cout<<ch[i]<<" ";
		/* code */
	}
}

int main(int argc, char const *argv[])
{
	char ch[1000][1000] = {"hello", "world","coding","wonderful"};
	sort(ch, 4);
	return 0;

}