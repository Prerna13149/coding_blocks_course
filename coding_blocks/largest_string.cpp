#include<iostream>
#include<climits>
using namespace std;
int getlen(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void copyArray(char ch1[], char ch2[], int l1, int l2){
	int i=0;
	while(ch2[i]!=0){
		ch1[i] = ch2[i];
		i++;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cin.get();
	char ch[1000];
	int i=0;
	int max = INT_MIN;
	char res[1000];
	while(i<n){
		cin.getline(ch, 1000);
		int len = getlen(ch);
		if(len>max){
			max = len;
			int j = 0;
			while(ch[j]!='\0'){//copying the string
				res[j] = ch[j];
				j++;
			}
			res[j] = '\0';
		}
		i++;
	}
	cout<<max<<"\n";
	cout<<res<<"\n";
	//i=0;
	// while(i<max){
	// 	cout<<res[i];
	// 	i++;
	// }
	
	
	return 0;
}