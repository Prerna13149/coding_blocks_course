
#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
	// cout<<"Coding blocks"<<endl;
	// int N;
	// cin>>N;
	// cout<<"number entered is "<<N<<endl;
	// char ch;
	// cin>>ch;
	// cout<<ch<<endl;
	// cin>> N>> ch;
	// cout<<N<<" "<<ch<<endl;

	//check for odd or even
	// if(N%2==0){
	// 	cout<<"even"<<endl;
	// }
	// else{
	// 	cout<<"odd"<<endl;
	// }


	//Largest of 3 numbers
	// int a, b, c;
	// cin>>a>>b>>c;
	// if(a>b && b>c){
	// 	cout<<"Largest number is "<<a<<endl;
	// }
	// else if(b>c && b>a){
	// 	cout<<"Largest number is "<<b<<endl;
	// }
	// else{
	// 	cout<<"Largest number is "<<c<<endl;
	// }

	//printing coding blocks 10 times
	// int i=1;
	// while(i<=10){
	// 	cout<<"Coding blocks"<<endl;
	// 	i = i + 1;
	// }

	//Sum of N numbers entered by user
	int i=1;
	int n;
	cin>>n;
	int sum=0;
	int a;
	int max = INT_MIN;
	int min = INT_MAX;
	while(i<=n){
		cin>>a;
		if(a>max){
			max = a;
		}
		if(a<min){
			min = a;
		}
		sum = sum + a;
		i = i + 1;
	}
	float mean = (1.0* sum)/n;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Min: "<<min<<endl;
	cout<<"Max: "<<max<<endl;
	cout<<"Mean: "<<sum/n<<endl;
	cout<<"Mean: "<<mean<<endl;

	return 0;
}