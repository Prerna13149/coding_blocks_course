#include<iostream>
#include<cstring>
using namespace std;


//------------------------BLUE PRINT----------------------------------
class car
{
   int seats;

 	public:

 	char *name;//we can't initialise here as values are assigned when object is created
 	int model;
 	int price;
 	const int tyres;

 	static int count;
 	
 	car():tyres(4)//intialising tyres to 4
 	{
 		count++;
 		name=NULL;
 		// cout<<"Hello"<<endl;
 	}

 	// car(char *ch,int m,int p)
 	// {
 	// 	cout<<"here"<<endl;
 	// 	strcpy(name,ch);
 	// 	price=p;
 	// 	model=m;
 	// 	seats=4;
 	// }

 	car(char *ch,int m,int p,int s):tyres(4), model(m)//this is called initialisation list
 	{
 		count++;
 		name=new char[strlen(ch)+1];
 		strcpy(name,ch);
 		price=p;
 		model=m;
 		seats=s;
 	}



 	void print()const //const - as values are not getting updated here--helps in debugging
 	{
 		cout<<name<<endl;
 		cout<<model<<endl;
 		cout<<price<<endl;
 		cout<<seats<<endl;
 		cout<<tyres<<endl;
 	}


 	void setValues(char *ch,int m,int p,int s)
 	{
 		if(name!=NULL)
 		{
 			delete []name;
 			name=NULL;
 		}
 		name=new char[strlen(ch)+1];
 		strcpy(name,ch);
 		model=m;
 		price=p;
 		seats=s;
 	}

 	void setSeats(int s)
 	{
 		if(seats>0)
 		{
 			seats=s;
 		}
 		else
 		{
 			seats=4;
 		}
 		
 	}
    
    int getSeats()
    {
    	return seats;
    }

    void setName(char *ch)
    {
    	if(name!=NULL)
    	{
    		delete []name;
    		name=NULL;
    	}
    	name=new char[strlen(ch)+1];
    	strcpy(name,ch);
    }

    void operator+=(car x){
    	char *oldname=name;
    	int l1=strlen(name);
    	int l2 = strlen(x.name);
    	name = new char[l1+l2+1];
    	strcpy(name, oldname);
    	strcat(name, x.name);
    	delete []oldname;

    	model+=x.model;
    	price+=x.price;
    }

    car* operator+(car x){
    	char *oldname=name;
    	int l1=strlen(name);
    	int l2 = strlen(x.name);
    	name = new char[l1+l2+1];
    	strcpy(name, oldname);
    	strcat(name, x.name);
    	delete []oldname;

    	model+=x.model;
    	price+=x.price;
    	car* out = new car(name, model, price, 4);
    	return out;
    }

    ~car(){
    	count--;
    	cout<<"deleting objects "<<name<<"\n";
    }



};

int car::count=0;//static variables

int main()
{
	// car A,B;
	// cout<<endl;
	// car C("Audi",90,1000,4);
	// C.print();
	// cout<<endl;

	// // C.setValues("honda",78,1000,4);
	// // C.print();
	// // cout<<endl;

	// // C.setName("BMW");
	// // cout<<C.name<<endl;


	// car D(C);
	// D.print();

	// car E=D;
	// E.print();
	// car D("Audi",99,1100);
	// D.print();
	// cout<<endl;
	// A.model=45;
	// strcpy(A.name,"BMW");
	// A.price=100;
	// // A.seats=4;
	// A.setSeats(-1);

	// A.print();

	// cout<<A.name<<endl;
	// cout<<A.model<<endl;
	// cout<<A.price<<endl;
	// cout<<A.getSeats()<<endl;
	// cout<<A.seats<<endl;

	// cout<<endl;

	// B.model=90;
	// strcpy(B.name,"Audi");
	// B.price=800;
	// // B.seats=4;

	// B.print();
	// cout<<endl;

	car C;
	C.setValues("honda",78,1000,4);
	C.print();
	cout<<endl;

	car A;
	A.setValues("audi",78,1000,4);
	A.print();
	cout<<endl;
	//cout<<"count "<<car::count<<"\n";
	A+=C;
	A.print();

	car* G = new car("Mahindra", 90, 1001, 4);//dynamic memory
	(*G).print();

	//cout<<"count "<<car::count<<"\n";
	cout<<"************"<<"\n";
	cout<<"New object"<<"\n";
	car *sum = A+C;
	(*sum).print();


	return 0;
}