#include<iostream>
using namespace std;
int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
void copyString(char ch[], char ch2[]){
	int n1 = getLength(ch);
	int n2 = getLength(ch2);
	int i=0;
	while(i<n2){
		ch[i] = ch2[i];
		i++;
	}
	ch[i] = '\0';
}
void largestString(){
	int n;
	cin>>n;
	cin.get();
	int i=0;
	char ch[1000];
	char res[1000];
	int max = 0;
	while(i<n){
		cin.getline(ch, 1000);
		int len = getLength(ch);
		if(len>max){
			max = len;
			copyString(res, ch);
		} 
		i++;
	}
	cout<<res<<"\n";

}
void appendString(){
	char ch1[1000];
	
	cin.getline(ch1, 1000);
	char ch2[1000];
	cin.getline(ch2, 1000);
	int n1 = getLength(ch1);
	int n2 = getLength(ch2);
	int i=n1;
	int j =0;
	while(i<(n1+n2)){
		ch1[i] = ch2[j];
		j++;
		i++;
	}
	ch1[i] = '\0';
	cout<<ch1<<"\n";

}
bool checkPalindrome(char ch[], int n){
	int i=0;
	int j=n-1;
	while(i<j){
		if(ch[i]!=ch[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;

}
void readline(char ch[], int size, char delimiter='\n'){
	char p;
	p=cin.get();
	int i=0;
	while(p!=delimiter){
		ch[i] = p;
		i++;
		p = cin.get();
	}
	ch[i] = '\0';
	int len = getLength(ch);
	cout<<ch<<"\n";
	cout<<getLength(ch)<<"\n";
	if(checkPalindrome(ch, len)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
}
void rotate(){
	int n;
	cin>>n;
	cin.get();
	char ch[1000];
	cin.getline(ch, 1000);
	int len = getLength(ch);
	int k = len+n-1;
	int j=len-1;
	while(j>=0){
		ch[k] = ch[j];
		j--;
		k--;
	}
	ch[len+n] = '\0';
	cout<<ch<<"\n";
	int i=0;
	j=len;
	while(i<n){
		ch[i] = ch[j];
		i++;
		j++;
	}
	ch[len] = '\0';
	cout<<ch<<"\n";
}
void reverseString(){
	char ch[1000];
	cin.getline(ch, 1000);
	int len = getLength(ch);
	int i=0;
	int j = len -1;
	while(i<j){
		swap(ch[i], ch[j]);
		i++;
		j--;
	}
	cout<<ch<<endl;

}
void stringRotate(){
	char ch[1000];
	int n;
	cin>>n;
	cin.get();
	cin.getline(ch, 1000);
	int len = getLength(ch);
	int i=0;
	int j=0;
	while(i<n){
		ch[len+n-1+i] = ch[len-1+i];
		i++;
	}
	ch[len+n] = '\0';
	cout<<ch<<"\n";
}
int main(){
	char ch[1000];
	//readline(ch, 1000, '$');
	//cout<<"Append STring"<<"\n";
	//appendString();
	//largestString();
	//reverseString();
	rotate();
	return 0;
}