/*
Check if a string is a permuation of a given string
Logic - 
- Create an array of int arr[256] to store frequency of each character
- Iterate over 1st string, for every character, increment count arr[acii_val_of_character]++
- Iterate over 2nd string and substract for every character arr[acii_val_of_character]--
- Check if all elements in int arr[256] is equal to zero, this means same characters were present in both - It is a permuatation
*/
#include<iostream>
using namespace std;
int getLength(char ch[]){
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	return i;
}
bool checkPermutation(char ch1[], char ch2[], int n1, int n2){
	int arr[256] = {0};//if we know that input is only small or caps, then we take arr[26] 
	int i=0;
	while(i < n1){
		int t = (int)ch1[i];
		arr[t]++;
		i++;
	}
	// i=0;
	// cout<<"FRequency array"<<"\n";
	// while(i<256){
	// 	cout<<arr[i]<<" ";
	// 	i++;
	// }
	// cout<<" "<<"\n";
	i=0;
	while(i < n2){
		int t = (int)ch2[i];
		arr[t]--;
		i++;
	}

	i=0;
	while(i < 256){
		if(arr[i]!=0){
			return false;
		}
		i++;
	}
	return true;
}
int main(){
	char ch1[1000];
	char ch2[1000];
	cin.getline(ch1, 1000);
	cin.getline(ch2, 1000);
	int n1 = getLength(ch1);
	int n2 = getLength(ch2);
	if(n1!=n2){
		cout<<"Not permuation"<<"\n";
		return 0;
	}
	if(checkPermutation(ch1, ch2, n1, n2)){
		cout<<"Yes permuation"<<"\n";
	}
	else{
		cout<<"Not a permuatation"<<"\n";
	}
	return 0;
}