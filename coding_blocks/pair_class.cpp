#include<iostream>
using namespace std;

class Pair{
	public:
		int x;
		int y;

	Pair(int a, int b){
		x = a;
		y = b;
	}
	bool operator>(Pair b){
		if(x>b.x && y>b.y){
			return true;
		}
		return false;
	}
	~Pair(){
		cout<<"Deleting objects"<<"\n";
	}
};
int main(int argc, char const *argv[])
{
	int x;
	int y;
	cin>>x>>y;
	Pair a(x, y);
	Pair b(5, 6);
	bool ans = a>b;
	if(ans){
		cout<<"1st object is greater"<<"\n";
	}
	else{
		cout<<"2nd object is greater"<<"\n";
	}
	return 0;
}