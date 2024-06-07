#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the value  of a "<<endl;
	cin>>a;
	cout<<"enter the value if b is : "<<endl;
	cin>>b;
	char op;
	cout<<"enter the opertaion which you want to do"<<endl;
	cin>>op;
	switch(op){
		case '+':cout<<(a+b)<<endl;
		break;
		case '-': cout<<(a-b)<<endl;
		break;
		case '*': cout<<(a*b)<<endl;
		break;
		case'/':cout<<(a/b)<<endl;
		break;
	}
	cout<<endl;
	
	
}
