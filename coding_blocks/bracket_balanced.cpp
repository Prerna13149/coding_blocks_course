#include<iostream>
#include<cstring>
using namespace std;
bool isBalanced(char ch[], int arr[], int i, int n){
	if(ch[i]=='\0'){
		for (int k = 0; k < 3; k++)
		{
			/* code */
			if(arr[k]!=0){
				return false;
			}
		}
		//cout<<arr[0]<<"\n";
		return true;
	}
	if(ch[i]=='[' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[0]++;
		i++;
	}
	if(ch[i]=='{' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[1]++;
		i++;
	}
	if(ch[i]=='(' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[2]++;
		i++;
	}
	if(ch[i]==']' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[0]--;
		i++;
	}
	if(ch[i]=='}' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[1]--;
		i++;
	}
	if(ch[i]==')' ){//|| ch[i]=='{' || ch[i]=='('){
		arr[2]--;
		i++;
	}
	else{
		i++;
	}
	//cout<<arr[0]<<" ";
	return isBalanced(ch, arr, i, n);

}
bool isBalanced2(char ch[], int i, int n, char data){
	if(ch[i]=='\0' || i>=n){
		//cout<<arr[0]<<"\n";
		return true;
	}
	bool ans;
	if(ch[i]==data){
		return true;
	}
	else if(ch[i]=='[' ){
		i++;
		ans = isBalanced2(ch, i, n, ']');
		if(ans==0){
			cout<<"here"<<"\n";
			return false;
		}
	}
	else if(ch[i]=='{' ){//|| ch[i]=='{' || ch[i]=='('){
		i++;
		ans = isBalanced2(ch, i, n, '}');
		if(ans==0){
			cout<<"here"<<"\n";
			return false;
		}
	}
	else if(ch[i]=='(' ){//|| ch[i]=='{' || ch[i]=='('){
		i++;
		ans = isBalanced2(ch, i, n, ')');
		if(ans==0){
			cout<<"here"<<"\n";
			return false;
		}
	}
	else{

		i++;
	}
	//cout<<arr[0]<<" ";
	return isBalanced2(ch, i, n, '\n');

}

int main(int argc, char const *argv[])
{
	char ch[1000];
	cin.getline(ch, 1000);
	//cout<<ch<<"\n";
	int i=0;
	int out[3]={0};
	int n=strlen(ch);
	if(isBalanced(ch, out, 0, n) && isBalanced2(ch, 0, n, '\n')){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}