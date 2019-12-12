#include<iostream>
using namespace std;
int main() {
    char ch;
    //ch = 'a';
    // int a;
    // int b;
    cin>>ch;
    while(ch!='X' &&  ch!='x'){
        cin>>ch;
        if(ch=='*'){
          int a, b;
          cin>>a;
          cin>>b;
          cout<<a*b<<"\n";
        }
        else if(ch=='/'){
            int a, b;
            cin>>a;
            cin>>b;
            if(b!=0){
                cout<<a/b<<"\n";    
            }
            
        }
        else if(ch=='+'){
            int a, b;
            cin>>a;
            cin>>b;
            cout<<a+b<<"\n";
        }
        else if(ch=='-'){
            int a, b;
            cin>>a;
            cin>>b;
            cout<<a-b<<"\n";
        }
        else if(ch=='%'){
            int a,b;
            cin>>a;
            cin>>b;
            if(b!=0){
                cout<<a%b<<"\n";
            }
            
        }
        else{
            cout<<"Invalid operation. Try again.";
        }
        //cin>>ch;
    }
	return 0;
}