#include<iostream>
#include<cstring>
using namespace std;

class car{
	public:
		//char name[20];//char * name --for dynamic allocation
		char name[20];
		int model;
		int price;
		int seats;
		car(){//constructor
			//name = NULL;
			cout<<"hello"<<"\n";
		}
		void print(){//public
			cout<<name<<"\n";
			cout<<model<<"\n";
			cout<<price<<"\n";
		}
		void setValues(char arr[], int m, int p){
			
			// if(name!=NULL){//first check if pointer is not pointing to any location, as it can lead to memory leakage
			// 	delete name[];
			// 	name = NULL;
			// }
			// name = new char[strlen(arr)+1];// use this for dynamic allocation
			strcpy(name, arr);
			model = m;
			price = p;

		}
		// void setName(char n[]){
		// 	if(name!=NULL){//first check if pointer is not pointing to any location, as it can lead to memory leakage
		// 		delete []name;
		// 		name = NULL;
		// 	}
		// 	name = new char[strlen(n)+1];// use this for dynamic allocation
		// 	strcpy(name, n);
		// 	//name[i]='\0';
		// }
		int getSeats(){
			return seats;
		}

		// car(car &x){//for dynamic allocation
		// 	name = new char[strlen(x.name)+1];
		// 	strcpy(name, x.name);
		// 	model = x.model;
		// 	price = x.price;
		// 	seats = x.seats;
		// }
};

int main(int argc, char const *argv[])
{
	car A;
	A.model = 45;
	A.price = 100;
	strcpy(A.name, "BMW");
	cout<<A.model<<"\n";
	cout<<A.name<<"\n";

	car B;
	B.model = 47;
	B.price = 100;
	strcpy(B.name, "Audi");
	A.print();
	B.print();

	B.setValues("HOnda", 89, 900);
	B.print();
	 int x = A.getSeats();
	 cout<<x<<"\n";
	 //A.setName("Bullet");
	 //A.print();

	car C(A);//copy constructor
	C.print();
	car D = C;//invokes copy constructor
	D.print();

	car F;
	F=A;//operator overloading


	return 0;
}