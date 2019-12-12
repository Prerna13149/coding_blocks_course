#include<iostream>
using namespace std;
int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void printSubstring2(char ch[], int n){
	int i=0;
	int j = 0;
	while(ch[i]!='\0'){
		
		for (int k = i; k <= j; k++)
		{
			cout<<ch[k];
				/* code */
		 }
			

		j++;
		i++;
	}

}
void printSubstring(char ch[], int n){
	int i=0;
	int j;
	while(ch[i]!='\0'){
		j=i;
		while(ch[j]!='\0'){
			// for (int k = i; k <= j; k++)
			// {
			cout<<ch[j];
				/* code */
			// }
			
			j++;
		}
		cout<<"\n";
		i++;
	}

}
int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	int n = getLength(ch);
	printSubstring2(ch, n);
	return 0;
}