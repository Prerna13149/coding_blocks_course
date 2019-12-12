/*
PLAYING WITH CARDS (IN STACK)
You are at a casino. There are N stacked cards on pile . Each card has a number written on it. Then there will be Q iterations. In ith iteration, you start picking up the cards in Ai-1th pile from the top one by one and check whether the number written on the card is divisible by the ith prime number. If the number is divisible, you stack that card on pile Bi. Otherwise, you stack that card on pile Ai. After Q iterations, cards can only be on pile B1, B2, B3, . . . BQ, AQ . Output numbers on these cards from top to bottom of each piles in order of B1, B2, B3, . . . BQ, AQ .


Input Format:
First line contains N and Q. The next line contains N space separated integers representing the initial pile of cards i.e., A0. The leftmost value represents the bottom plate of the pile.

Constraints:
N < 10^5

Output Format:
Output N lines, each line containing the number written on the card.

Sample Input:
5 1
3 4 7 6 5
Sample Output:
4
6
3
7
5
Explanation:
Initially:

A0 = [3, 4, 7, 6, 5]<-TOP

After 1st iteration:

A0 = []<-TOP

A1 = [5, 7, 3]<-TOP

B1 = [6, 4]<-TOP

Now first print B1 from top to bottom then A1 from top to bottom.


*/
#include<bits/stdc++.h>
using namespace std;

vector<long long int>arr_prime;
void sieve(bool arr[], vector<long long int> &primes, long long int min, long long int max){
	long long int j;
	// cout<<min<<" "<<max<<endl;
	for (long long int i = 0; i < primes.size(); i++)
	{
		j=2;
		while(primes[i]*j<max){
			if((primes[i]*j)>min){
				arr[primes[i]*j - min]=false;
			}
			j++;
		}
	}
	for (long long int i = min; i < max; i++)
	{
		// cout<<"i: "<<i<<endl;
		j=2;
		if(i%2==0){
			arr[i-min] = false;
		}
		else{
			if(arr[i-min]!=false){
				primes.push_back(i);
				while(i*j<max){
					arr[i*j - min]=false;
					j++;
				}
			}
		}
	}
}
bool checkPrime(long long int n){
    if(n%2==0)return false;
	for (long long int i = 3; i <=sqrt(n); i+=2)
	{
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

void set_prime(long long int n){
	//int k = 0;
    arr_prime.push_back(2);
	for (long long int i = 3; i < n; i+=2)
	{
		if(checkPrime(i)){
			arr_prime.push_back(i);
			//k++;
		}
		/* code */
	}

}

void print_stack(stack<long long int>s, long long int k, vector<long long int>arr_prime){
	long long int i = 0;
	long long int prime_no = 0;
	stack<long long int> a1;
	stack<long long int> b1;
	while(i < k){
		stack<long long int> temp;
		while(!s.empty()){
			if(s.top()%arr_prime[prime_no]==0){
				b1.push(s.top());
			}
			else{
				a1.push(s.top());
			}
			s.pop();
		}
		while(!b1.empty()){
			cout<<b1.top()<<"\n";
			b1.pop();
		}
		if(i==(k-1)){
			while(!a1.empty()){
				cout<<a1.top()<<"\n";
				a1.pop();
			}
		}
		else{
			while(!a1.empty()){
				//cout<<a1.top()<<"\n";
				temp.push(a1.top());
				a1.pop();
			}
            while(!temp.empty()){
                s.push(temp.top());
				temp.pop();
            }
		}
        prime_no++;
		i++;
	}

}
int main(int argc, char const *argv[])
{
	long long int n;
	long long int itr;
	cin>>n>>itr;
	stack<long long int> s;
	long long int num;
    vector<long long int>primes;
    primes.push_back(2);
	bool arr1[100000];
	memset(arr1,true,sizeof(arr1));
	long long int min, max;
	min = 2, max = 100000;
	sieve(arr1, primes, min, max);
	for (long long int i = 0; i < n; i++)
	{
		cin>>num;
		s.push(num);
		/* code */
	}
	// set_prime(n);
	print_stack(s, itr, primes);
	return 0;
}
